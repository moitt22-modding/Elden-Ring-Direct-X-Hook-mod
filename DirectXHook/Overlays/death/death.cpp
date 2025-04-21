#include "death.h"

using namespace OF;

void death::Setup()
{
	InitFramework(m_device, m_spriteBatch, m_window);
	box = CreateBox(180, 0, 800, 800);
	texture = LoadTexture("hook_textures\\death_screen.png");
}

void death::Render()
{
	DrawBox(box, texture);
}