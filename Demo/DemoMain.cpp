/***************************************************************
 * Name:      DemoMain.cpp
 * Purpose:   Code for Application Frame
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

#include "DemoMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


BEGIN_EVENT_TABLE(DemoFrame, wxFrame)
    EVT_CLOSE(DemoFrame::OnClose)
    EVT_MENU(idMenuQuit, DemoFrame::OnQuit)
    EVT_MENU(idMenuAbout, DemoFrame::OnAbout)
END_EVENT_TABLE()

DemoFrame::DemoFrame(wxWindow* parent,wxWindowID id)
{
Create(parent,id,wxEmptyString,wxDefaultPosition,wxDefaultSize,wxDEFAULT_FRAME_STYLE,wxT("id"));
SetClientSize(wxSize(800,600));
topSizer=new wxBoxSizer(wxHORIZONTAL);
m_page=new Page(this,wxID_ANY);
Connect(Page::ID_BUTTON_EXIT,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DemoFrame::OnButton_exitClick);
}
DemoFrame::~DemoFrame()
{
}
void DemoFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}
void DemoFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}
void DemoFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
void DemoFrame::OnButton_exitClick(wxCommandEvent &event)
{
    Destroy();
}
