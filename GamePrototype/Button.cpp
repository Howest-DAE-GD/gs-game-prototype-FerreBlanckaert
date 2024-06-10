#include "pch.h"
#include "Button.h"
#include "utils.h"
using namespace utils;


Button::Button(Point2f position, float height, float width)
{
	m_MyBounds.bottom = position.y;
	m_MyBounds.height = height;
	m_MyBounds.left = position.x;
	m_MyBounds.width = width;
		
}
void Button::Draw() const
{
	DrawRect(m_MyBounds);
}
bool Button::ProcessMouseUpEvent(const SDL_MouseButtonEvent& e)
{
	float xPos = e.x;
	float yPos = e.y;
	Point2f m_MousePosition{ xPos, yPos };
	if (IsPointInRect(m_MousePosition, m_MyBounds))
	{
		return true;
	}
}
