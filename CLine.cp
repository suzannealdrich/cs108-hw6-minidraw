// CLine.cp#include "CLine.h"CLine::CLine(LView* superCanvas, LWindow* superWindow)	: CShape(superCanvas, superWindow) {		}void CLine::DrawMyShape(){	::PenNormal();	::RGBForeColor(&mFrameColor);	::MoveTo(mStartPt.h, mStartPt.v);	::LineTo(mEndPt.h, mEndPt.v);}int CLine::GetClassInt() const { 	return msg_LineTool; }