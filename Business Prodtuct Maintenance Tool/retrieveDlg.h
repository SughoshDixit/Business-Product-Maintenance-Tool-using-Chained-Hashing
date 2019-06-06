#if !defined(AFX_RETRIEVEDLG_H__693A0D01_169A_492E_9137_0A53C7F637ED__INCLUDED_)
#define AFX_RETRIEVEDLG_H__693A0D01_169A_492E_9137_0A53C7F637ED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// retrieveDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// retrieveDlg dialog

class retrieveDlg : public CDialog
{
// Construction
public:
	retrieveDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(retrieveDlg)
	enum { IDD = RetrievePDlg };
	CListCtrl	m_ret;
	CEdit	m_EDITproductid;
	CString	m_productid;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(retrieveDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(retrieveDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RETRIEVEDLG_H__693A0D01_169A_492E_9137_0A53C7F637ED__INCLUDED_)
