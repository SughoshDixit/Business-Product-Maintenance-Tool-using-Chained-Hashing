// retrieveCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "retrieveCDlg.h"
#include "node.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// retrieveCDlg dialog


retrieveCDlg::retrieveCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(retrieveCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(retrieveCDlg)
	m_company = _T("");
	//}}AFX_DATA_INIT
}


void retrieveCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(retrieveCDlg)
	DDX_Control(pDX, IDC_LIST1, m_ret);
	DDX_Control(pDX, IDC_EDIT1, m_Editcompany);
	DDX_Text(pDX, IDC_EDIT1, m_company);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(retrieveCDlg, CDialog)
	//{{AFX_MSG_MAP(retrieveCDlg)
	ON_BN_CLICKED(IDOK2, OnretrieveC)
	ON_BN_CLICKED(IDCANCEL2, OnCancel2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// retrieveCDlg message handlers

void retrieveCDlg::OnretrieveC() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	node disp;
	View view;
	int flag;

	strcpy(view.gst,m_company);

	flag=disp.retrieveC(view);
	if(m_company=="")
	{
		AfxMessageBox("Please provide Company Gst Number to find their products.");
		m_Editcompany.SetFocus();
		return;
	}
	if(flag==1 && strcmp(disp.v.gst,m_company)==0)
	{
		m_ret.DeleteAllItems();
		int nItem;
		nItem=m_ret.InsertItem(0,_T(disp.v.gst));	
		m_ret.SetItemText(nItem, 1, _T(disp.v.company));
		m_ret.SetItemText(nItem, 2, _T(disp.v.id));
		m_ret.SetItemText(nItem, 3, _T(disp.v.product));
		nItem=0;

		MessageBox("Retrieval succesful!!Record found using the hash value of the GST No of the company");
	}
			  
	else
	{
		MessageBox("Retrieval unsuccessful!!The Company with the given GST No does not exist.");
	}

}

BOOL retrieveCDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_ret.InsertColumn( 
		 0,				// Rank/order of item 
		 _T("GST"),		// Caption for this header 
		 LVCFMT_CENTER,    // Relative position of items under header 
		 120);      

   m_ret.InsertColumn(1, _T("COMPANY"),LVCFMT_CENTER, 120);
   m_ret.InsertColumn(2, _T("PRODUCT ID"),LVCFMT_CENTER, 150);
   m_ret.InsertColumn(3, _T("PRODUCT"),LVCFMT_CENTER, 180);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void retrieveCDlg::OnCancel2() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();

}
