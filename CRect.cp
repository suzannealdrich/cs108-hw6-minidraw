// CRect.cp#include "CRect.h"#include "CDrawUtils.h"CRect::CRect(LView* superCanvas, LWindow* superWindow)	: CShape(superCanvas, superWindow) {		}void CRect::DrawMyShape(){	Rect shape;	CDrawUtils::CalcEnclosingRect(mStartPt, mEndPt, shape);	::PenNormal();		::RGBForeColor(&mFillColor);	::PaintRect(&shape);		::RGBForeColor(&mFrameColor);	::FrameRect(&shape);}int CRect::GetClassInt() const { 	return msg_RectTool; }