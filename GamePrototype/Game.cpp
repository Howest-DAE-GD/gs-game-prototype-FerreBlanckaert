#include "pch.h"
#include "Game.h"
#include "Utils.h"
#include "iostream"
using namespace utils;

Game::Game( const Window& window ) 
	:BaseGame{ window }
{
	Initialize();
}

Game::~Game( )
{
	Cleanup( );
}

void Game::Initialize( )
{
	
	

	





	m_String = new Texture{ m_Strings.at(0), "Roboto-Regular.ttf", 40 ,  Color4f{1.f, 0.f, 0.f, 1.f}};

	m_String2 = new Texture{ m_Strings.at(1), "Roboto-Regular.ttf", 40 ,  Color4f{1.f, 0.f, 0.f, 1.f}};

	m_ButtonPtr = new Button{ Point2f{50.f, 250.f}, 200.f, 300.f };

	m_ButtonPtr2 = new Button{ Point2f{500.f, 250.f}, 200.f, 300.f };
}

void Game::Cleanup( )
{
	delete m_ButtonPtr;
	delete m_ButtonPtr2;
	delete m_String;
}

void Game::Update( float elapsedSec )
{
	float AccumulatedTime{};
	AccumulatedTime += elapsedSec;

	
	
	if (CameraPos.x - m_enemiePos1.x < 0)
	{
		m_enemiePos1.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos1.x > 0)
	{
		m_enemiePos1.x += 1;
	}
	if (CameraPos.y - m_enemiePos1.y > 0)
	{
		m_enemiePos1.y += 1;
	}
	else if (CameraPos.y - m_enemiePos1.y < 0)
	{
		m_enemiePos1.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos2.x < 0)
	{
		m_enemiePos2.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos2.x > 0)
	{
		m_enemiePos2.x += 1;
	}
	if (CameraPos.y - m_enemiePos2.y > 0)
	{
		m_enemiePos2.y += 1;
	}
	else if (CameraPos.y - m_enemiePos2.y < 0)
	{
		m_enemiePos2.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos3.x < 0)
	{
		m_enemiePos3.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos3.x > 0)
	{
		m_enemiePos3.x += 1;
	}
	if (CameraPos.y - m_enemiePos3.y > 0)
	{
		m_enemiePos3.y += 1;
	}
	else if (CameraPos.y - m_enemiePos3.y < 0)
	{
		m_enemiePos3.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos4.x < 0)
	{
		m_enemiePos4.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos4.x > 0)
	{
		m_enemiePos4.x += 1;
	}
	if (CameraPos.y - m_enemiePos4.y > 0)
	{
		m_enemiePos4.y += 1;
	}
	else if (CameraPos.y - m_enemiePos4.y < 0)
	{
		m_enemiePos4.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos5.x < 0)
	{
		m_enemiePos5.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos5.x > 0)
	{
		m_enemiePos5.x += 1;
	}
	if (CameraPos.y - m_enemiePos5.y > 0)
	{
		m_enemiePos5.y += 1;
	}
	else if (CameraPos.y - m_enemiePos5.y < 0)
	{
		m_enemiePos5.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos6.x < 0)
	{
		m_enemiePos6.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos6.x > 0)
	{
		m_enemiePos6.x += 1;
	}
	if (CameraPos.y - m_enemiePos6.y > 0)
	{
		m_enemiePos6.y += 1;
	}
	else if (CameraPos.y - m_enemiePos6.y < 0)
	{
		m_enemiePos6.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos7.x < 0)
	{
		m_enemiePos7.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos7.x > 0)
	{
		m_enemiePos7.x += 1;
	}
	if (CameraPos.y - m_enemiePos7.y > 0)
	{
		m_enemiePos7.y += 1;
	}
	else if (CameraPos.y - m_enemiePos7.y < 0)
	{
		m_enemiePos7.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos8.x < 0)
	{
		m_enemiePos8.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos8.x > 0)
	{
		m_enemiePos8.x += 1;
	}
	if (CameraPos.y - m_enemiePos8.y > 0)
	{
		m_enemiePos8.y += 1;
	}
	else if (CameraPos.y - m_enemiePos8.y < 0)
	{
		m_enemiePos8.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos9.x < 0)
	{
		m_enemiePos9.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos9.x > 0)
	{
		m_enemiePos9.x += 1;
	}
	if (CameraPos.y - m_enemiePos9.y > 0)
	{
		m_enemiePos9.y += 1;
	}
	else if (CameraPos.y - m_enemiePos9.y < 0)
	{
		m_enemiePos9.y -= 1;
	}
	
	if (CameraPos.x - m_enemiePos10.x < 0)
	{
		m_enemiePos10.x -= 1;
	}
	else if (CameraPos.x - m_enemiePos10.x > 0)
	{
		m_enemiePos10.x += 1;
	}
	if (CameraPos.y - m_enemiePos10.y > 0)
	{
		m_enemiePos10.y += 1;
	}
	else if (CameraPos.y - m_enemiePos10.y < 0)
	{
		m_enemiePos10.y -= 1;
	}

	 
	const Uint8 *pStates = SDL_GetKeyboardState( nullptr );
	if ( pStates[SDL_SCANCODE_RIGHT] )
	{
		CameraPos.x+=3;
	}
	if ( pStates[SDL_SCANCODE_LEFT] )
	{
		CameraPos.x-=3;
	}
	if (pStates[SDL_SCANCODE_UP])
	{
		CameraPos.y += 3;
	}
	if (pStates[SDL_SCANCODE_DOWN])
	{
		CameraPos.y -= 3;
	}
	if (IsPointInRect(CameraPos, m_Victory))
	{
		++Points;
		std::cout << Points << std::endl;
		CameraPos.x = rand() % 1500;
		CameraPos.y = rand() % 1500;
		m_enemiePos1.x = float(rand() % 1500);
		m_enemiePos2.x	= 	float(rand()%1500);
		m_enemiePos3.x	= 	float(rand()%1500);
		m_enemiePos4.x	= 	float(rand()%1500);
		m_enemiePos5.x	= 	float(rand()%1500);
		m_enemiePos6.x	= 	float(rand()%1500);
		m_enemiePos7.x	= 	float(rand()%1500);
		m_enemiePos8.x	= 	float(rand()%1500);
		m_enemiePos9.x	= 	float(rand()%1500);
		m_enemiePos10.x	= 	float(rand()%1500);
		m_enemiePos1.y = float(rand() % 1500);
		m_enemiePos2.y = float(rand() % 1500);
		m_enemiePos3.y = float(rand() % 1500);
		m_enemiePos4.y = float(rand() % 1500);
		m_enemiePos5.y = float(rand() % 1500);
		m_enemiePos6.y = float(rand() % 1500);
		m_enemiePos7.y = float(rand() % 1500);
		m_enemiePos8.y = float(rand() % 1500);
		m_enemiePos9.y = float(rand() % 1500);
		m_enemiePos10.y = float(rand() % 1500);
		m_Victory.bottom	= float(rand() % 1500);
		m_Victory.left		= float(rand() % 1500);
		
	}
	if (IsPointInCircle(m_enemiePos1, Circlef{ CameraPos, 50 })|| IsPointInCircle(m_enemiePos2, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos3, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos4, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos5, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos6, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos7, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos8, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos9, Circlef{ CameraPos, 50 }) || IsPointInCircle(m_enemiePos10, Circlef{ CameraPos, 50 }) )
	{
		CameraPos.x = rand() % 1500;
		CameraPos.y = rand() % 1500;
	}
}

void Game::Draw( ) const
{
	ClearBackground( );
	glPushMatrix();
	glTranslatef(-CameraPos.x + 450, -CameraPos.y + 150, 0);
	SetColor(Color4f{ 255, 0, 0, 1 });
	FillEllipse(m_enemiePos1, 25, 25);
	FillEllipse(m_enemiePos2, 25, 25);
	FillEllipse(m_enemiePos3, 25, 25);
	FillEllipse(m_enemiePos4, 25, 25);
	FillEllipse(m_enemiePos5, 25, 25);
	FillEllipse(m_enemiePos6, 25, 25);
	FillEllipse(m_enemiePos7, 25, 25);
	FillEllipse(m_enemiePos8, 25, 25);
	FillEllipse(m_enemiePos9, 25, 25);
	FillEllipse(m_enemiePos10, 25, 25);
	/*m_String->Draw(Point2f{ 137.f, 350.f });
	m_String2->Draw(Point2f{ 565.f, 350.f });
	m_ButtonPtr->Draw();
	m_ButtonPtr2->Draw();*/
	SetColor(Color4f{ 0, 0, 256, 1 });
	FillEllipse(CameraPos, 50, 50);
	SetColor(Color4f{ 0, 255, 0, 1 });
	FillRect(m_Victory);
	glPopMatrix();
}

void Game::ProcessKeyDownEvent( const SDL_KeyboardEvent & e )
{
	
	/*if (e.keysym.sym == 100)
	{
		CameraPos.x += 4;
	}
	if (e.keysym.sym == 113)
	{
		--CameraPos.x +;
	}
	if (e.keysym.sym == 122)
	{
		++CameraPos.y;
	}
	if (e.keysym.sym == 115)
	{
		--CameraPos.y;
	}*/
}

void Game::ProcessKeyUpEvent( const SDL_KeyboardEvent& e )
{
	/*std::cout << "KEYUP event: " << e.keysym.sym << std::endl;
	switch ( e.keysym.sym )
	{
	case SDLK_LEFT:
		std::cout << "Left arrow key released\n";
		break;
	case SDLK_RIGHT:
		std::cout << "`Right arrow key released\n";
		break;
	case SDLK_1:
	case SDLK_KP_1:
		std::cout << "Key 1 released\n";
		break;
	}*/
}

void Game::ProcessMouseMotionEvent( const SDL_MouseMotionEvent& e )
{
	//std::cout << "MOUSEMOTION event: " << e.x << ", " << e.y << std::endl;
}

void Game::ProcessMouseDownEvent( const SDL_MouseButtonEvent& e )
{
	//std::cout << "MOUSEBUTTONDOWN event: ";
	//switch ( e.button )
	//{
	//case SDL_BUTTON_LEFT:
	//	std::cout << " left button " << std::endl;
	//	break;
	//case SDL_BUTTON_RIGHT:
	//	std::cout << " right button " << std::endl;
	//	break;
	//case SDL_BUTTON_MIDDLE:
	//	std::cout << " middle button " << std::endl;
	//	break;
	//}
	
}

void Game::ProcessMouseUpEvent( const SDL_MouseButtonEvent& e )
{
	/*std::cout << "MOUSEBUTTONUP event: ";
	switch ( e.button )
	{
	case SDL_BUTTON_LEFT:
		std::cout << " left button " << std::endl;
		break;
	case SDL_BUTTON_RIGHT:
		std::cout << " right button " << std::endl;
		break;
	case SDL_BUTTON_MIDDLE:
		std::cout << " middle button " << std::endl;
		break;
	}*/
	std::cout << m_ButtonPtr->ProcessMouseUpEvent(e) << std::endl;
	std::cout << m_ButtonPtr2->ProcessMouseUpEvent(e) << std::endl;

}

void Game::ClearBackground( ) const
{
	glClearColor( 0.0f, 0.0f, 0.3f, 1.0f );
	glClear( GL_COLOR_BUFFER_BIT );
}
