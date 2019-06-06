#if !defined(AFX_VIEWDLG_H__209EF161_D4A5_4791_BE71_1ABD81DDB29A__INCLUDED_)
#define AFX_VIEWDLG_H__209EF161_D4A5_4791_BE71_1ABD81DDB29A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// viewdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// viewdlg dialog

class viewdlg : public CDialog
{
// Construction
public:
	viewdlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(viewdlg)
	enum { IDD = ViewDlg };
	CListCtrl	m_view;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(viewdlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(viewdlg)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIEWDLG_H__209EF161_D4A5_4791_BE71_1ABD81DDB29A__INCLUDED_)
