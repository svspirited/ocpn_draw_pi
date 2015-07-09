///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ODPathPropertiesDialogDef.h"

///////////////////////////////////////////////////////////////////////////

ODPathPropertiesDialogDef::ODPathPropertiesDialogDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerProperties;
	bSizerProperties = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizerNameDescription;
	bSizerNameDescription = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextName = new wxStaticText( this, wxID_ANY, wxT("Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextName->Wrap( -1 );
	bSizerNameDescription->Add( m_staticTextName, 0, wxALL, 5 );
	
	m_textCtrlName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNameDescription->Add( m_textCtrlName, 0, wxALL|wxEXPAND, 5 );
	
	m_staticTextDescription = new wxStaticText( this, wxID_ANY, wxT("Description"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDescription->Wrap( -1 );
	bSizerNameDescription->Add( m_staticTextDescription, 0, wxALL, 5 );
	
	m_textCtrlDesctiption = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNameDescription->Add( m_textCtrlDesctiption, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer1->Add( bSizerNameDescription, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerColour;
	bSizerColour = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticTextLineColour = new wxStaticText( this, wxID_ANY, wxT("Line Colour"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLineColour->Wrap( -1 );
	bSizerColour->Add( m_staticTextLineColour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_colourPickerLineColour = new wxColourPickerCtrl( this, wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizerColour->Add( m_colourPickerLineColour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticTextFillColour = new wxStaticText( this, wxID_ANY, wxT("Fill Colour"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFillColour->Wrap( -1 );
	bSizerColour->Add( m_staticTextFillColour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_colourPickerFillColour = new wxColourPickerCtrl( this, wxID_ANY, wxColour( 255, 0, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizerColour->Add( m_colourPickerFillColour, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticTextLineStyle = new wxStaticText( this, wxID_ANY, wxT("Line Style"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLineStyle->Wrap( -1 );
	bSizerColour->Add( m_staticTextLineStyle, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxString m_choiceLineStyleChoices[] = { wxT("Solid"), wxT("Dot"), wxT("Long Dash"), wxT("Short Dash"), wxT("Dot Dash"), wxEmptyString };
	int m_choiceLineStyleNChoices = sizeof( m_choiceLineStyleChoices ) / sizeof( wxString );
	m_choiceLineStyle = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceLineStyleNChoices, m_choiceLineStyleChoices, 0 );
	m_choiceLineStyle->SetSelection( 0 );
	bSizerColour->Add( m_choiceLineStyle, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticTextLineWidth = new wxStaticText( this, wxID_ANY, wxT("Line Width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLineWidth->Wrap( -1 );
	bSizerColour->Add( m_staticTextLineWidth, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxString m_choiceLineWidthChoices[] = { wxT("1 pixel"), wxT("2 pixels"), wxT("3 pixels"), wxT("4 pixels"), wxT("5 pixels"), wxT("6 pixels"), wxT("7 pixels"), wxT("8 pixels"), wxT("9 pixels"), wxT("10 pixels"), wxEmptyString };
	int m_choiceLineWidthNChoices = sizeof( m_choiceLineWidthChoices ) / sizeof( wxString );
	m_choiceLineWidth = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceLineWidthNChoices, m_choiceLineWidthChoices, 0 );
	m_choiceLineWidth->SetSelection( 1 );
	bSizerColour->Add( m_choiceLineWidth, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxBoxSizer* bSizerExtra;
	bSizerExtra = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticTextTotalLength = new wxStaticText( this, wxID_ANY, wxT("Total Length"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextTotalLength->Wrap( -1 );
	bSizerExtra->Add( m_staticTextTotalLength, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_textCtrlTotalLength = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerExtra->Add( m_textCtrlTotalLength, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_checkBoxActive = new wxCheckBox( this, wxID_ANY, wxT("Active"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxActive->SetValue(true); 
	bSizerExtra->Add( m_checkBoxActive, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	bSizerColour->Add( bSizerExtra, 1, wxEXPAND, 5 );
	
	
	fgSizer1->Add( bSizerColour, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerPathPoints;
	bSizerPathPoints = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextODPoints = new wxStaticText( this, wxID_ANY, wxT("Points"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextODPoints->Wrap( -1 );
	bSizerPathPoints->Add( m_staticTextODPoints, 0, wxALL, 5 );
	
	m_listCtrlODPoints = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
	bSizerPathPoints->Add( m_listCtrlODPoints, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer1->Add( bSizerPathPoints, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerOKCancel;
	bSizerOKCancel = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonOK = new wxButton( this, wxID_ANY, wxT("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonOK->SetDefault(); 
	bSizerOKCancel->Add( m_buttonOK, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_buttonCancel = new wxButton( this, wxID_ANY, wxT("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerOKCancel->Add( m_buttonCancel, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	fgSizer1->Add( bSizerOKCancel, 1, wxEXPAND, 5 );
	
	
	bSizerProperties->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizerProperties );
	this->Layout();
	bSizerProperties->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ODPathPropertiesDialogDef::OnClose ) );
	m_listCtrlODPoints->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ODPathPropertiesDialogDef::OnLeftDoubleClick ), NULL, this );
	m_listCtrlODPoints->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ODPathPropertiesDialogDef::OnRightClick ), NULL, this );
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ODPathPropertiesDialogDef::OnOK ), NULL, this );
	m_buttonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ODPathPropertiesDialogDef::OnCancel ), NULL, this );
}

ODPathPropertiesDialogDef::~ODPathPropertiesDialogDef()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ODPathPropertiesDialogDef::OnClose ) );
	m_listCtrlODPoints->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ODPathPropertiesDialogDef::OnLeftDoubleClick ), NULL, this );
	m_listCtrlODPoints->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ODPathPropertiesDialogDef::OnRightClick ), NULL, this );
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ODPathPropertiesDialogDef::OnOK ), NULL, this );
	m_buttonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ODPathPropertiesDialogDef::OnCancel ), NULL, this );
	
}