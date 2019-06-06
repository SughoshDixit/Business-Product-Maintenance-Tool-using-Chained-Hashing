// deleteDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "deleteDlg.h"
#include "node.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// deleteDlg dialog


deleteDlg::deleteDlg(CWnd* pParent /*=NULL*/)
	: CDialog(deleteDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(deleteDlg)
	m_del = _T("");
	//}}AFX_DATA_INIT
}


void deleteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(deleteDlg)
	DDX_Control(pDX, IDC_EDIT1, m_Editdel);
	DDX_Text(pDX, IDC_EDIT1, m_del);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(deleteDlg, CDialog)
	//{{AFX_MSG_MAP(deleteDlg)
	ON_BN_CLICKED(IDOK, Ondel)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// deleteDlg message handlers

void deleteDlg::Ondel() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	node disp;
	View view;
	int flag;

	strcpy(view.id,m_del);

	flag=disp.del(view);
	if(m_del=="")
	{
		AfxMessageBox("Please provide Product Id to be deleted.");
		m_Editdel.SetFocus();
		return;
	}
	if(flag==1 && strcmp(disp.v.id,m_del)==0)
	{
	
		MessageBox("Record was found by the hash value of the product id and  is Deleted!!");
	}
			  
	else
	{
		MessageBox("Record requested for deletion was not found");
	}
	
}
