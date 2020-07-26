// Texture_Dlg.cpp : implementation file
//

#include "pch.h"
#include "CGApplication.h"
#include "Texture_Dlg.h"
#include "afxdialogex.h"


// Texture_Dlg dialog

IMPLEMENT_DYNAMIC(Texture_Dlg, CDialogEx)

Texture_Dlg::Texture_Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Texture_Dlg::~Texture_Dlg()
{
}

void Texture_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT2, m_editCtrl);
}


BEGIN_MESSAGE_MAP(Texture_Dlg, CDialogEx)
END_MESSAGE_MAP()


// Texture_Dlg message handlers
