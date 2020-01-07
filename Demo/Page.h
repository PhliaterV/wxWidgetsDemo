#ifndef PAGE_H
#define PAGE_H
#include <wx/wx.h>
class Page : public wxPanel
{
public:
    Page(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
    virtual ~Page();
    wxButton* Button_save;
    wxButton* Button_link;
    wxButton* Button_insert;
    wxButton* Button_clear;
    wxButton* Button_send;
    wxButton* Button_exit;
    wxStaticText* StaticTextHead;
    wxTextCtrl* TextCtrl1;
    wxTextCtrl* TextCtrl2;
    wxBoxSizer* topSizer;
    wxPanel* m_panel;
    wxStaticText* StaticTextState;
    wxStaticText* StaticTextIP;
    wxStaticText* StaticTextTime;
    bool listen=false;
public:
    static const long ID_STATICTEXTHEAD;
    static const long ID_BUTTON_SAVE;
    static const long ID_BUTTON_LINK;
    static const long ID_BUTTON_INSERT;
    static const long ID_TEXTCTRL1;
    static const long ID_TEXTCTRL2;
    static const long ID_BUTTON_SEND;
    static const long ID_BUTTON_CLEAR;
    static const long ID_BUTTON_EXIT;
    //void initCtrlList();
private:
    void OnButton_saveClick(wxCommandEvent& event);
    void OnButton_linkClick(wxCommandEvent& event);
    void OnButton_insertClick(wxCommandEvent& event);
    //void OnButton_exitClick(wxCommandEvent& event);

    void OnButton_clearClick(wxCommandEvent& event);
    void OnButton_sendClick(wxCommandEvent& event);

    DECLARE_EVENT_TABLE()

};

#endif // PAGE
