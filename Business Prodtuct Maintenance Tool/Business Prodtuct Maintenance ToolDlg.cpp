// Business Prodtuct Maintenance ToolDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Business Prodtuct Maintenance Tool.h"
#include "Business Prodtuct Maintenance ToolDlg.h"
#include "node.h"
#include "viewdlg.h"
#include "retrieveDlg.h"
#include "retrieveCDlg.h"
#include "democatalogueDlg.h"
#include "deleteDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBusinessProdtuctMaintenanceToolDlg dialog

CBusinessProdtuctMaintenanceToolDlg::CBusinessProdtuctMaintenanceToolDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBusinessProdtuctMaintenanceToolDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBusinessProdtuctMaintenanceToolDlg)
	m_GST = _T("");
	m_COMPANY = _T("");
	m_ID = _T("");
	m_PRODUCT = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBusinessProdtuctMaintenanceToolDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBusinessProdtuctMaintenanceToolDlg)
	DDX_Control(pDX, IDC_EDIT4, m_EditPRODUCT);
	DDX_Control(pDX, IDC_EDIT3, m_EditID);
	DDX_Control(pDX, IDC_EDIT2, m_EditCOMPANY);
	DDX_Control(pDX, IDC_EDIT1, m_EditGST);
	DDX_Text(pDX, IDC_EDIT1, m_GST);
	DDX_Text(pDX, IDC_EDIT2, m_COMPANY);
	DDX_Text(pDX, IDC_EDIT3, m_ID);
	DDX_Text(pDX, IDC_EDIT4, m_PRODUCT);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CBusinessProdtuctMaintenanceToolDlg, CDialog)
	//{{AFX_MSG_MAP(CBusinessProdtuctMaintenanceToolDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnAbout)
	ON_BN_CLICKED(InsertBTN, OnInsertBTN)
	ON_BN_CLICKED(IDC_BUTTON3, OnView)
	ON_BN_CLICKED(IDOK2, Onproductret)
	ON_BN_CLICKED(IDOK4, OnCompanyret)
	ON_BN_CLICKED(IDOK3, OnCatalogue)
	ON_BN_CLICKED(IDOK6, OnCancel)
	ON_BN_CLICKED(IDOK5, OnDelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBusinessProdtuctMaintenanceToolDlg message handlers

BOOL CBusinessProdtuctMaintenanceToolDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBusinessProdtuctMaintenanceToolDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CBusinessProdtuctMaintenanceToolDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CBusinessProdtuctMaintenanceToolDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CBusinessProdtuctMaintenanceToolDlg::OnAbout() 
{
	// TODO: Add your control notification handler code here
	CAboutDlg c;
	c.DoModal();
}


void CBusinessProdtuctMaintenanceToolDlg::OnInsertBTN() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	node comp;
	if(m_GST=="")
	{
		AfxMessageBox("Please provide your gst number");
		m_EditGST.SetFocus();
		return;
	}
	if(m_COMPANY=="")
	{
		AfxMessageBox("Please provide your company name");
		m_EditCOMPANY.SetFocus();
		return;
	}
	if(m_ID=="")
	{
		AfxMessageBox("Please provide your product id");
		m_EditID.SetFocus();
		return;
	}
	if(m_PRODUCT=="")
	{
		AfxMessageBox("Please provide your product");
		m_EditPRODUCT.SetFocus();
		return;
	}
	strcpy(comp.gst,m_GST);
	strcpy(comp.company,m_COMPANY);
	strcpy(comp.id,m_ID);
	strcpy(comp.product,m_PRODUCT);
	comp.insert();

	CDialog::OnOK();
}


void CBusinessProdtuctMaintenanceToolDlg::OnView() 
{
	// TODO: Add your control notification handler code here
	viewdlg v;
	v.DoModal();
}

void CBusinessProdtuctMaintenanceToolDlg::OnCancel() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();
}

void CBusinessProdtuctMaintenanceToolDlg::Onproductret() 
{
	// TODO: Add your control notification handler code here
	retrieveDlg r;
	r.DoModal();
}

void CBusinessProdtuctMaintenanceToolDlg::OnCompanyret() 
{
	// TODO: Add your control notification handler code here
	retrieveCDlg r;
	r.DoModal();
}

void CBusinessProdtuctMaintenanceToolDlg::OnCatalogue() 
{
	// TODO: Add your control notification handler code here
	democatalogueDlg d;
	d.DoModal();
}

void CBusinessProdtuctMaintenanceToolDlg::OnDelete() 
{
	// TODO: Add your control notification handler code here
	deleteDlg d;
	d.DoModal();
}
