// FormView.cpp : implementation file
//

#include "pch.h"
#include "CGApplication.h"
#include "FormView.h"



// FormView

IMPLEMENT_DYNCREATE(FormView, CFormView)

FormView::FormView()
	: CFormView(IDD_FormView)
{

}

FormView::~FormView()
{
}

void FormView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(FormView, CFormView)
	ON_BN_CLICKED(IDC_ROTATE, &FormView::OnBnClickedRotate)
	ON_BN_CLICKED(IDC_TRANSLATE, &FormView::OnBnClickedTranslate)
	ON_BN_CLICKED(IDC_SCALE, &FormView::OnBnClickedScale)
	ON_BN_CLICKED(IDC_CUBE, &FormView::OnBnClickedCube)
	ON_BN_CLICKED(IDC_SPHERE, &FormView::OnBnClickedSphere)
	ON_BN_CLICKED(IDC_TEAPOT, &FormView::OnBnClickedTeapot)
	ON_BN_CLICKED(IDC_CONE, &FormView::OnBnClickedCone)
	ON_BN_CLICKED(IDC_WHEELE, &FormView::OnBnClickedWheele)
	ON_BN_CLICKED(IDC_CYLINDER, &FormView::OnBnClickedCylinder)
	ON_BN_CLICKED(IDC_FRUSTUM, &FormView::OnBnClickedFrustum)
	ON_BN_CLICKED(IDC_PYRAMID, &FormView::OnBnClickedPyramid)
	ON_BN_CLICKED(IDC_BUTTON16, &FormView::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &FormView::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &FormView::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_LIGHT, &FormView::OnBnClickedLight)
	ON_BN_CLICKED(IDC_LIGHT_SOURCE, &FormView::OnBnClickedLightSource)
	ON_BN_CLICKED(IDC_SHADOW, &FormView::OnBnClickedShadow)
	ON_BN_CLICKED(IDC_FOG, &FormView::OnBnClickedFog)
	ON_BN_CLICKED(IDC_TEXTURE, &FormView::OnBnClickedTexture)
	ON_BN_CLICKED(IDC_AUTO_ROTATING, &FormView::OnBnClickedAutoRotating)
END_MESSAGE_MAP()


// FormView diagnostics

#ifdef _DEBUG
void FormView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void FormView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// FormView message handlers


void FormView::OnBnClickedRotate()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedTranslate()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedScale()
{
	// TODO: Add your control notification handler code here
	Scale_Dlg scale_dlg;
	scale_dlg.DoModal();
}


void FormView::OnBnClickedCube()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedSphere()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedTeapot()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedCone()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedWheele()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedCylinder()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedFrustum()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedPyramid()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedButton16()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedButton17()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedButton18()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedLight()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedLightSource()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedShadow()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedFog()
{
	// TODO: Add your control notification handler code here
}


void FormView::OnBnClickedTexture()
{
	// TODO: Add your control notification handler code here
	Texture_Dlg texture_dlg;
	texture_dlg.DoModal();
}


void FormView::OnBnClickedAutoRotating()
{
	// TODO: Add your control notification handler code here
}
