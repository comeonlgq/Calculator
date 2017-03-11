// CalculatorDlg.h : header file
//

#if !defined(AFX_CALCULATORDLG_H__DCCD5D55_019C_41C9_90DC_6F9F2FC82A7D__INCLUDED_)
#define AFX_CALCULATORDLG_H__DCCD5D55_019C_41C9_90DC_6F9F2FC82A7D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCalculatorDlg dialog

class CCalculatorDlg : public CDialog
{
// Construction
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCalculatorDlg)
	enum { IDD = IDD_CALCULATOR_DIALOG };
	double	m_first;
    double	m_second;
	CString	m_operator;
	double	m_coff;
	CString	m_display;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculatorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	double UpdateDisplay(double IVal);
	void Calculate(void);
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCalculatorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton0();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonDiv();
	afx_msg void OnButtonEqual();
	afx_msg void OnButtonMinus();
	afx_msg void OnButtonMutiply();
	afx_msg void OnButtonPoint();
	afx_msg void OnButtonReci();
	afx_msg void OnButtonSign();
	afx_msg void OnButtonSqrt();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATORDLG_H__DCCD5D55_019C_41C9_90DC_6F9F2FC82A7D__INCLUDED_)
