// CLine.h#pragma once#include "CShape.h"class CLine : public CShape  {public:		enum { class_ID = 'LNsa' };		CLine(LView* superCanvas, LWindow* superWindow);		virtual void DrawMyShape();	virtual int GetClassInt() const;};