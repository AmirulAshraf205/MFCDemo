
// MFCDemoDlg.h : header file
//

#pragma once


// CMFCDemoDlg dialog
class CMFCDemoDlg : public CDialogEx
{
// Construction
public:
	CMFCDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFCDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CButton m_btnHardWrite;
	CStatic m_sttWriting;
	CString m_sWriting;

	afx_msg void OnBnClickedHardWrite(void);
	afx_msg void OnBnClickedDelete(void);
};
