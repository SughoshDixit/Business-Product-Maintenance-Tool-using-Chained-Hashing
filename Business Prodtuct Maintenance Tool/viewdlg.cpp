// viewdlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "viewdlg.h"
#include "node.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// viewdlg dialog


viewdlg::viewdlg(CWnd* pParent /*=NULL*/)
	: CDialog(viewdlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(viewdlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void viewdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(viewdlg)
	DDX_Control(pDX, IDC_LIST1, m_view);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(viewdlg, CDialog)
	//{{AFX_MSG_MAP(viewdlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// viewdlg message handlers

BOOL viewdlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_view.InsertColumn( 
      0,              // Rank/order of item 
      _T("GST"),
	  LVCFMT_CENTER,// Caption for this header     // Relative position of items under header 
      100);      

   m_view.InsertColumn(1, _T("COMPANY"),LVCFMT_CENTER, 100);
   m_view.InsertColumn(2, _T("PRODUCT ID"),LVCFMT_CENTER, 100);
   m_view.InsertColumn(3, _T("PRODUCT"),LVCFMT_CENTER, 100);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void viewdlg::OnOK() 
{
	// TODO: Add extra validation here
		int i;
	node disp;
	UpdateData(FALSE);
	
	fstream f1("company.txt",ios::in|ios::app);

	while(!f1.eof())
	{
		f1.getline(disp.gst,15,'|');
		f1.getline(disp.company,15,'|');
		f1.getline(disp.id,15,'|');
		f1.getline(disp.product,15,'\n');
		
		   int nItem;

	nItem = m_view.InsertItem(0, _T(disp.gst));
	m_view.SetItemText(nItem, 1, _T(disp.company));
	m_view.SetItemText(nItem, 2, _T(disp.id));
	m_view.SetItemText(nItem, 3, _T(disp.product));
		}
	f1.close();
//	CDialog::OnOK();
}
