#if !defined(AFX_RETRIEVECDLG_H__773FC79A_EFCF_4AA3_B7BF_F5AFFDC64ECF__INCLUDED_)
#define AFX_RETRIEVECDLG_H__773FC79A_EFCF_4AA3_B7BF_F5AFFDC64ECF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// retrieveCDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// retrieveCDlg dialog

class retrieveCDlg : public CDialog
{
// Construction
public:
	retrieveCDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(retrieveCDlg)
	enum { IDD = RetrieveCDlg };
	CListCtrl	m_ret;
	CEdit	m_Editcompany;
	CString	m_company;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(retrieveCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(retrieveCDlg)
	afx_msg void OnretrieveC();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancel2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RETRIEVECDLG_H__773FC79A_EFCF_4AA3_B7BF_F5AFFDC64ECF__INCLUDED_)
