// CRect.h#pragma once#include "CShape.h"class CRect : public CShape  {public:		enum { class_ID = 'RTsa' };		CRect(LView* superCanvas, LWindow* superWindow);		virtual void DrawMyShape();		virtual int GetClassInt() const;};