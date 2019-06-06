// democatalogueDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "democatalogueDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// democatalogueDlg dialog


democatalogueDlg::democatalogueDlg(CWnd* pParent /*=NULL*/)
	: CDialog(democatalogueDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(democatalogueDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void democatalogueDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(democatalogueDlg)
	DDX_Control(pDX, IDC_LIST1, m_catalogue);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(democatalogueDlg, CDialog)
	//{{AFX_MSG_MAP(democatalogueDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// democatalogueDlg message handlers

void democatalogueDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

BOOL democatalogueDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_catalogue.InsertColumn( 
		 0,				// Rank/order of item 
		 _T("PRODUCT"),		// Caption for this header 
		 LVCFMT_CENTER,    // Relative position of items under header 
		 180);      

   m_catalogue.InsertColumn(1, _T("CLASS 1"),LVCFMT_CENTER, 120);
   m_catalogue.InsertColumn(2, _T("CLASS 2"),LVCFMT_CENTER, 150);
   m_catalogue.InsertColumn(3, _T("CODE GENERATED"),LVCFMT_CENTER, 180);

   int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Coffee Mug"));	
		m_catalogue.SetItemText(nItem, 1, _T("Red"));
		m_catalogue.SetItemText(nItem, 2, _T("model no.1"));
		m_catalogue.SetItemText(nItem, 3, _T("CM01-R"));

		   //int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Coffee Mug"));	
		m_catalogue.SetItemText(nItem, 1, _T("White"));
		m_catalogue.SetItemText(nItem, 2, _T("model no.1"));
		m_catalogue.SetItemText(nItem, 3, _T("CM01-W"));

		   //int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Coffee Mug"));	
		m_catalogue.SetItemText(nItem, 1, _T("Blue"));
		m_catalogue.SetItemText(nItem, 2, _T("model no.1"));
		m_catalogue.SetItemText(nItem, 3, _T("CM01-B"));

		   //int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Coffee Mug"));	
		m_catalogue.SetItemText(nItem, 1, _T("Red"));
		m_catalogue.SetItemText(nItem, 2, _T("model no.1"));
		m_catalogue.SetItemText(nItem, 3, _T("CM01-R"));

		   //int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Summer 2012 T-Shirt"));	
		m_catalogue.SetItemText(nItem, 1, _T("Gecko Tee"));
		m_catalogue.SetItemText(nItem, 2, _T("Small Red"));
		m_catalogue.SetItemText(nItem, 3, _T("S12T-Gec-RS"));


			 //  int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Summer 2012 T-Shirt"));	
		m_catalogue.SetItemText(nItem, 1, _T("Gecko Tee"));
		m_catalogue.SetItemText(nItem, 2, _T("Medium Red"));
		m_catalogue.SetItemText(nItem, 3, _T("S12T-Gec-RM"));

			   //int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Summer 2012 T-Shirt"));	
		m_catalogue.SetItemText(nItem, 1, _T("Ladybird Tee"));
		m_catalogue.SetItemText(nItem, 2, _T("Small White"));
		m_catalogue.SetItemText(nItem, 3, _T("S12T-Lad-WS"));
			
	
				//	   int nItem;
		nItem=m_catalogue.InsertItem(0,_T("Summer 2012 T-Shirt"));	
		m_catalogue.SetItemText(nItem, 1, _T("Ladybird Tee"));
		m_catalogue.SetItemText(nItem, 2, _T("Medium White"));
		m_catalogue.SetItemText(nItem, 3, _T("S12T-Lad-WM"));
	



	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
