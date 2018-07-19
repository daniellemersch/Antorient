///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Sep 12 2010)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!////////////////////////////////////////////////////////////////////////////* * *  Copyright Danielle Mersch. All rights reserved. * */#include "wx_datcorr.h"///////////////////////////////////////////////////////////////////////////DatcorrWindow::DatcorrWindow( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxDefaultSize, wxDefaultSize );		wxBoxSizer* bSizer3;	bSizer3 = new wxBoxSizer( wxVERTICAL );		wxBoxSizer* bSizer4;	bSizer4 = new wxBoxSizer( wxHORIZONTAL );		m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Dat input:"), wxDefaultPosition, wxSize( 130,-1 ), wxALIGN_RIGHT );	m_staticText3->Wrap( -1 );	bSizer4->Add( m_staticText3, 0, wxALIGN_CENTER|wxALL, 5 );		dat_n = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.dat"), wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL );	bSizer4->Add( dat_n, 0, wxALIGN_CENTER|wxALL, 5 );		bSizer3->Add( bSizer4, 1, wxALIGN_CENTER|wxEXPAND, 5 );		wxBoxSizer* bSizer5;	bSizer5 = new wxBoxSizer( wxHORIZONTAL );		m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Tags input:"), wxDefaultPosition, wxSize( 130,-1 ), wxALIGN_RIGHT );	m_staticText4->Wrap( -1 );	bSizer5->Add( m_staticText4, 0, wxALIGN_CENTER|wxALL, 5 );		tags_n = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.tags"), wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL );	bSizer5->Add( tags_n, 0, wxALIGN_CENTER|wxALL, 5 );		bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );		wxBoxSizer* bSizer6;	bSizer6 = new wxBoxSizer( wxHORIZONTAL );		m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Output file:"), wxDefaultPosition, wxSize( 130,-1 ), wxALIGN_RIGHT );	m_staticText31->Wrap( -1 );	bSizer6->Add( m_staticText31, 0, wxALIGN_CENTER|wxALL, 5 );		output_n = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.dat"), wxDefaultPosition, wxDefaultSize, wxFLP_OVERWRITE_PROMPT|wxFLP_SAVE|wxFLP_USE_TEXTCTRL );	bSizer6->Add( output_n, 0, wxALL, 5 );		bSizer3->Add( bSizer6, 1, wxEXPAND, 5 );		wxBoxSizer* bSizer51;	bSizer51 = new wxBoxSizer( wxHORIZONTAL );		m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("Postprocessing log:"), wxDefaultPosition, wxSize( 130,-1 ), wxALIGN_RIGHT );	m_staticText41->Wrap( -1 );	bSizer51->Add( m_staticText41, 0, wxALIGN_CENTER|wxALL, 5 );		log_n = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.log"), wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_SAVE|wxFLP_USE_TEXTCTRL );	bSizer51->Add( log_n, 0, wxALL, 5 );		bSizer3->Add( bSizer51, 1, wxEXPAND, 5 );		m_sdbSizer1 = new wxStdDialogButtonSizer();	m_sdbSizer1OK = new wxButton( this, wxID_OK );	m_sdbSizer1->AddButton( m_sdbSizer1OK );	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );	m_sdbSizer1->Realize();	bSizer3->Add( m_sdbSizer1, 1, wxEXPAND, 5 );		this->SetSizer( bSizer3 );	this->Layout();		this->Centre( wxBOTH );		// Connect Events	m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DatcorrWindow::close_datcorr ), NULL, this );	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DatcorrWindow::start_datcorr ), NULL, this );}DatcorrWindow::~DatcorrWindow(){	// Disconnect Events	m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DatcorrWindow::close_datcorr ), NULL, this );	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DatcorrWindow::start_datcorr ), NULL, this );	}