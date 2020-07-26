#pragma once


// Texture_Dlg dialog

class Texture_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Texture_Dlg)

public:
	Texture_Dlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Texture_Dlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_editCtrl;
};
