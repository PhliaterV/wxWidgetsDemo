/***************************************************************
 * Name:      DemoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    whiter (775911039@qq.com)
 * Created:   2020-01-06
 * Copyright: whiter ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "DemoApp.h"
#include "DemoMain.h"

IMPLEMENT_APP(DemoApp);

bool DemoApp::OnInit()

{
    wxInitAllImageHandlers();
    DemoFrame* frame = new DemoFrame(0);
    SetTopWindow(frame);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
