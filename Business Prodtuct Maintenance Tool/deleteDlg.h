#if !defined(AFX_DELETEDLG_H__CD8938C9_0C79_4B63_9645_61DC9CABF238__INCLUDED_)
#define AFX_DELETEDLG_H__CD8938C9_0C79_4B63_9645_61DC9CABF238__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// deleteDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// deleteDlg dialog

class deleteDlg : public CDialog
{
// Construction
public:
	deleteDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(deleteDlg)
	enum { IDD = DeleteDlg };
	CEdit	m_Editdel;
	CString	m_del;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(deleteDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(deleteDlg)
	afx_msg void Ondel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELETEDLG_H__CD8938C9_0C79_4B63_9645_61DC9CABF238__INCLUDED_)
