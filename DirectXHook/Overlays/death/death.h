#pragma once

#include "IRenderCallback.h"
#include "OverlayFramework.h"

class death : public IRenderCallback
{
public:
	void Setup();
	void Render();

private:
	OF::Box* box;
	int texture = 0;
};