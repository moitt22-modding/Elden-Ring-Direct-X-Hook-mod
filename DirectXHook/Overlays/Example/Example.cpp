#include "Example.h"

using namespace OF;

void Example::Setup()
{
	InitFramework(m_device, m_spriteBatch, m_window);
	box = CreateBox(100, 100, 100, 100);
}

void Example::Render()
{
	DrawBox(box, 255, 0, 0);
}