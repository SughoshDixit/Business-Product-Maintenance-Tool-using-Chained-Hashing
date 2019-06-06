#if !defined(AFX_DEMOCATALOGUEDLG_H__DA737579_27B2_416B_91D0_5014EC817CB1__INCLUDED_)
#define AFX_DEMOCATALOGUEDLG_H__DA737579_27B2_416B_91D0_5014EC817CB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// democatalogueDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// democatalogueDlg dialog

class democatalogueDlg : public CDialog
{
// Construction
public:
	democatalogueDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(democatalogueDlg)
	enum { IDD = CatalogueDlg };
	CListCtrl	m_catalogue;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(democatalogueDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(democatalogueDlg)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DEMOCATALOGUEDLG_H__DA737579_27B2_416B_91D0_5014EC817CB1__INCLUDED_)
