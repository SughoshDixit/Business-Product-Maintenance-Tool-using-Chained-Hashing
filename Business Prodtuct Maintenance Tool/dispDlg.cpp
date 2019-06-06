// dispDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "dispDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// dispDlg dialog


dispDlg::dispDlg(CWnd* pParent /*=NULL*/)
	: CDialog(dispDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(dispDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void dispDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(dispDlg)
	DDX_Control(pDX, Display, m_view);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(dispDlg, CDialog)
	//{{AFX_MSG_MAP(dispDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// dispDlg message handlers

BOOL dispDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
