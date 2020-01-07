#ifndef PAGE_CPP
#define PAGE_CPP
#include "Page.h"
const long Page::ID_BUTTON_LINK=wxNewId();
const long Page::ID_BUTTON_SAVE=wxNewId();
const long Page::ID_BUTTON_INSERT=wxNewId();
const long Page::ID_TEXTCTRL1=wxNewId();
const long Page::ID_TEXTCTRL2=wxNewId();
const long Page::ID_STATICTEXTHEAD=wxNewId();
const long Page::ID_BUTTON_CLEAR=wxNewId();
const long Page::ID_BUTTON_SEND=wxNewId();
const long Page::ID_BUTTON_EXIT=wxNewId();
BEGIN_EVENT_TABLE(Page,wxPanel)
END_EVENT_TABLE()
Page::Page(wxWindow* parent,wxWindowID id,const wxPoint &pos,const wxSize& size)
{

    class DemoFrame;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer;
    Create(parent,wxID_ANY,wxDefaultPosition,wxDefaultSize,wxTAB_TRAVERSAL,wxT("wxID_ANY"));

    BoxSizer=new wxBoxSizer(wxVERTICAL);
    BoxSizer1=new wxBoxSizer(wxHORIZONTAL);
    BoxSizer2=new wxBoxSizer(wxHORIZONTAL);
    BoxSizer3=new wxBoxSizer(wxVERTICAL);
    BoxSizer4=new wxBoxSizer(wxVERTICAL);
    BoxSizer5=new wxBoxSizer(wxHORIZONTAL);
    BoxSizer6=new wxBoxSizer(wxHORIZONTAL);



    StaticTextHead=new wxStaticText(this,wxID_ANY,_("Demo"),wxDefaultPosition,wxDefaultSize,0,wxT("StaticTextHead"));
    //StaticTextHead->SetLabel(_("Demo"));
    BoxSizer->Add(StaticTextHead,0,wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL,5);
    Button_exit=new wxButton(this,ID_BUTTON_EXIT,wxT("EXIT"),wxDefaultPosition,wxDefaultSize,0,wxDefaultValidator,wxT("ID_BUTTON_EXIT"));
    Button_link=new wxButton(this,ID_BUTTON_LINK,wxT("LINK"),wxDefaultPosition,wxDefaultSize,0,wxDefaultValidator,wxT("ID_BUTTON_LINK"));
    Button_save=new wxButton(this,ID_BUTTON_SAVE,wxT("SAVE"),wxDefaultPosition,wxDefaultSize,0,wxDefaultValidator,wxT("ID_BUTTON_SAVE"));
    Button_insert=new wxButton(this,ID_BUTTON_INSERT,wxT("INSERT"),wxDefaultPosition,wxDefaultSize,0,wxDefaultValidator,wxT("ID_BUTTON_INSERT"));
    BoxSizer1->Add(Button_link,0,wxALL|wxALIGN_LEFT,5);
    BoxSizer1->Add(Button_insert,0,wxALL|wxALIGN_LEFT,5);
    BoxSizer2->Add(Button_save,0,wxALL|wxALIGN_LEFT,5);
    BoxSizer2->Add(Button_exit,0,wxALL|wxALIGN_LEFT,5);

    StaticTextState=new wxStaticText(this,wxID_ANY,wxT("state"),wxDefaultPosition,wxSize(200,40),0,wxT("STATE"));
    StaticTextIP=new wxStaticText(this,wxID_ANY,wxT("IP"),wxDefaultPosition,wxSize(200,40),0,wxT("IP"));
    StaticTextTime=new wxStaticText(this,wxID_ANY,wxT("TIME"),wxDefaultPosition,wxSize(200,40),0,wxT("TIME"));
    BoxSizer4->Add(BoxSizer1,0,wxLEFT|wxALIGN_LEFT,5);
    BoxSizer4->Add(BoxSizer2,0,wxLEFT|wxALIGN_LEFT,5);
    //BoxSizer4->Add(-1,-1,-1,wxLEFT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL,5);
    //BoxSizer4->Add(-1,-1,-1,wxLEFT|wxALIGN_LEFT,5);
    //BoxSizer4->Add(-1,-1,-1,wxLEFT|wxALIGN_LEFT,5);
    //BoxSizer4->Add(-1,-1,-1,wxLEFT|wxALIGN_LEFT,5);
    BoxSizer4->Add(StaticTextTime,0,wxLEFT|wxALIGN_BOTTOM|wxALIGN_LEFT,10);
    BoxSizer4->Add(StaticTextState,0,wxLEFT|wxALIGN_BOTTOM|wxALIGN_LEFT,10);
    BoxSizer4->Add(StaticTextIP,0,wxLEFT|wxALIGN_BOTTOM|wxALIGN_LEFT,10);
    BoxSizer5->Add(BoxSizer4,0,wxLEFT|wxALIGN_LEFT,5);

    TextCtrl1=new wxTextCtrl(this,ID_TEXTCTRL1,_("TEXT1"),wxDefaultPosition,wxSize(600,250),0,wxDefaultValidator,_T("TextCtrl1"));
    TextCtrl2=new wxTextCtrl(this,ID_TEXTCTRL2,_("TEXT2"),wxDefaultPosition,wxSize(600,250),0,wxDefaultValidator,_T("TextCtrl2"));
    BoxSizer3->Add(TextCtrl1,0,wxGROW|wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL,10);
    BoxSizer3->Add(TextCtrl2,0,wxGROW|wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL,10);
    Button_clear=new wxButton(this,ID_BUTTON_CLEAR,wxT("CLEAR"),wxDefaultPosition,wxDefaultSize,0,wxDefaultValidator,wxT("BUTTON_CLEAR"));
    Button_send=new wxButton(this,ID_BUTTON_SEND,wxT("SEND"),wxDefaultPosition,wxDefaultSize,0,wxDefaultValidator,wxT("BUTTON_SEND"));
    BoxSizer6->Add(Button_send,0,wxALL|wxALIGN_RIGHT,5);
    BoxSizer6->Add(Button_clear,0,wxALL|wxALIGN_RIGHT,5);
    BoxSizer3->Add(BoxSizer6,0,wxALL|wxALIGN_RIGHT,5);
    BoxSizer5->Add(BoxSizer3,1,wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL,5);
    BoxSizer->Add(BoxSizer5,1,wxSHAPED|wxALIGN_LEFT,5);
    SetSizer(BoxSizer);
    BoxSizer->Fit(this);
    BoxSizer->SetSizeHints(this);

    //Connect(ID_BUTTON_BaseLine,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MPage02::OnButton_BaseLineClick);
    //Connect(ID_BUTTON_EXIT,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Page::OnButton_exitClick);
    Connect(ID_BUTTON_SAVE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Page::OnButton_saveClick);
    Connect(ID_BUTTON_LINK,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Page::OnButton_linkClick);
    Connect(ID_BUTTON_INSERT,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Page::OnButton_insertClick);
}

Page::~Page()
{

}
//以下为开启socket侦听的函数
void Page::OnButton_linkClick(wxCommandEvent& event)
{
    if(listen)
    {
        StaticTextState.SetLabel(wxT("已开启侦听，请勿重复操作，靴靴"));
    }
    else
    {
        StaticTextState.SetLabel(wxT("侦听开启中..."));

    }
}
//void Page::OnButton_exitClick(wxCommandEvent& event)
//{
//   Destroy();
//}
void Page::OnButton_saveClick(wxCommandEvent& event)
{
    Destroy();
}
void Page::OnButton_insertClick(wxCommandEvent& event)
{
    Destroy();
}


#endif

