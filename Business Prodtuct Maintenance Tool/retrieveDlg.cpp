// retrieveDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "retrieveDlg.h"
#include "node.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// retrieveDlg dialog


retrieveDlg::retrieveDlg(CWnd* pParent /*=NULL*/)
	: CDialog(retrieveDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(retrieveDlg)
	m_productid = _T("");
	//}}AFX_DATA_INIT
}


void retrieveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(retrieveDlg)
	DDX_Control(pDX, IDC_LIST1, m_ret);
	DDX_Control(pDX, IDC_EDIT1, m_EDITproductid);
	DDX_Text(pDX, IDC_EDIT1, m_productid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(retrieveDlg, CDialog)
	//{{AFX_MSG_MAP(retrieveDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// retrieveDlg message handlers

void retrieveDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData();
	node disp;
	View view;
	int flag;

	strcpy(view.id,m_productid);

	flag=disp.retrieve(view);
	if(m_productid=="")
	{
		AfxMessageBox("Please provide Product Id to rerieve it's details.");
		m_EDITproductid.SetFocus();
		return;
	}
	if(flag==1 && strcmp(disp.v.id,m_productid)==0)
	{
		m_ret.DeleteAllItems();
		int nItem;
		nItem=m_ret.InsertItem(0,_T(disp.v.gst));	
		m_ret.SetItemText(nItem, 1, _T(disp.v.company));
		m_ret.SetItemText(nItem, 2, _T(disp.v.id));
		m_ret.SetItemText(nItem, 3, _T(disp.v.product));
		nItem=0;

		MessageBox("Retrieval succesful!!Record found using the hash value of the Product Id");
	}
			  
	else
	{
		MessageBox("Retrieval unsuccessful!!The Product Id does not exist.");
	}
	
}

BOOL retrieveDlg::OnInitDialog() 
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
