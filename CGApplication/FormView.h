#pragma once

#include "Scale_Dlg.h"
#include "Texture_Dlg.h"

// FormView form view

class FormView : public CFormView
{
	DECLARE_DYNCREATE(FormView)

protected:
	FormView();           // protected constructor used by dynamic creation
	virtual ~FormView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FormView };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRotate();
	afx_msg void OnBnClickedTranslate();
	afx_msg void OnBnClickedScale();
	afx_msg void OnBnClickedCube();
	afx_msg void OnBnClickedSphere();
	afx_msg void OnBnClickedTeapot();
	afx_msg void OnBnClickedCone();
	afx_msg void OnBnClickedWheele();
	afx_msg void OnBnClickedCylinder();
	afx_msg void OnBnClickedFrustum();
	afx_msg void OnBnClickedPyramid();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedLight();
	afx_msg void OnBnClickedLightSource();
	afx_msg void OnBnClickedShadow();
	afx_msg void OnBnClickedFog();
	afx_msg void OnBnClickedTexture();
	afx_msg void OnBnClickedAutoRotating();
};


