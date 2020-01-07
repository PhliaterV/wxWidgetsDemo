/***************************************************************
 * Name:      DemoMain.h
 * Purpose:   Defines Application Frame
 * Author:    whiter (775911039@qq.com)
 * Created:   2020-01-06
 * Copyright: whiter ()
 * License:
 **************************************************************/

#ifndef DEMOMAIN_H
#define DEMOMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "DemoApp.h"
#include "Page.h"

class DemoFrame: public wxFrame
{
    public:
        DemoFrame(wxWindow* parent,wxWindowID id = -1);
        ~DemoFrame();
    public:

        wxBoxSizer* topSizer;
        wxPanel* m_panel;
        Page* m_page;
    public:

    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton_exitClick(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // DEMOMAIN_H
