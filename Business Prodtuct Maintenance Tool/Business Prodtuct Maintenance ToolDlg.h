// Business Prodtuct Maintenance ToolDlg.h : header file
//

#if !defined(AFX_BUSINESSPRODTUCTMAINTENANCETOOLDLG_H__4EC52AA0_88E9_4453_A887_D54FD8AEDDF4__INCLUDED_)
#define AFX_BUSINESSPRODTUCTMAINTENANCETOOLDLG_H__4EC52AA0_88E9_4453_A887_D54FD8AEDDF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CBusinessProdtuctMaintenanceToolDlg dialog

class CBusinessProdtuctMaintenanceToolDlg : public CDialog
{
// Construction
public:
	CBusinessProdtuctMaintenanceToolDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CBusinessProdtuctMaintenanceToolDlg)
	enum { IDD = IDD_BUSINESSPRODTUCTMAINTENANCETOOL_DIALOG };
	CEdit	m_EditPRODUCT;
	CEdit	m_EditID;
	CEdit	m_EditCOMPANY;
	CEdit	m_EditGST;
	CEdit	m_Editproduct;
	CEdit	m_Editid;
	CEdit	m_Editcompany;
	CEdit	m_Editgst;
	CString	m_gst;
	CString	m_company;
	CString	m_id;
	CString	m_product;
	CString	m_GST;
	CString	m_COMPANY;
	CString	m_ID;
	CString	m_PRODUCT;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBusinessProdtuctMaintenanceToolDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBusinessProdtuctMaintenanceToolDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAbout();
	afx_msg void OnInsertBTN();
	afx_msg void OnView();
	afx_msg void OnCancel();
	afx_msg void Onproductret();
	afx_msg void OnCompanyret();
	afx_msg void OnCatalogue();
	afx_msg void OnDelete();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BUSINESSPRODTUCTMAINTENANCETOOLDLG_H__4EC52AA0_88E9_4453_A887_D54FD8AEDDF4__INCLUDED_)
