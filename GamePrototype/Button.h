#pragma once
class Button
{
public:
	Button(Point2f position, float height, float width);

	void Draw() const;
	bool ProcessMouseUpEvent(const SDL_MouseButtonEvent& e);
private:

	 Rectf m_MyBounds{};



};

