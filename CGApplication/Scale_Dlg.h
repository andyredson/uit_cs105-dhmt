#pragma once


// Scale_Dlg dialog

class Scale_Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Scale_Dlg)

public:
	Scale_Dlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Scale_Dlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCALE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
