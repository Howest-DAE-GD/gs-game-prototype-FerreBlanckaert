#pragma once
#include "BaseGame.h"
#include "Texture.h"
#include "Button.h"
#include "vector"
class Game : public BaseGame
{
public:
	explicit Game( const Window& window );
	Game(const Game& other) = delete;
	Game& operator=(const Game& other) = delete;
	Game( Game&& other) = delete;
	Game& operator=(Game&& other) = delete;
	// http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rh-override
	~Game();

	void Update( float elapsedSec ) override;
	void Draw( ) const override;

	// Event handling
	void ProcessKeyDownEvent( const SDL_KeyboardEvent& e ) override;
	void ProcessKeyUpEvent( const SDL_KeyboardEvent& e ) override;
	void ProcessMouseMotionEvent( const SDL_MouseMotionEvent& e ) override;
	void ProcessMouseDownEvent( const SDL_MouseButtonEvent& e ) override;
	void ProcessMouseUpEvent( const SDL_MouseButtonEvent& e ) override;

private:
	//Pointers
	Texture* m_String{};
	Texture* m_String2{};
	
	std::vector<std::string> m_Strings;
	Button* m_ButtonPtr{};
	Button* m_ButtonPtr2{};
	//DATA MEMBERS
	enum {

	};

	Point2f CameraPos{ 100, 100 };

	int Points{};

	int m_Angry{};

	int enemies{rand()%10+1};

	Rectf m_Victory{ float(rand() % 1500), float(rand() % 1500), 50, 25 };

	Point2f m_enemiePos1{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos2{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos3{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos4{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos5{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos6{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos7{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos8{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos9{float(rand()%1500), float(rand()%1500)};
	Point2f m_enemiePos10{ float(rand() % 1500), float(rand() % 1500) };
	// FUNCTIONS
	void Initialize();
	void Cleanup( );
	void ClearBackground( ) const;
};