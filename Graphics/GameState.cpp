#include "GameState.h"

GameState::GameState(sf::RenderWindow* window) :
	State(window) {}

GameState::~GameState()
{
}

void GameState::EndState()
{
	std::cout << "\nEnding game state";
}

void GameState::UpdateInput(const float& dt)
{
	this->CheckForQuit();
}

void GameState::Update(const float& dt)
{
	this->UpdateMousePositions();
	this->UpdateInput(dt);

	this->player.Update(dt);
}

void GameState::Render(sf::RenderTarget* target)
{
	if (target)
	{
		target = this->m_window; 
	}
	this->player.Render(this->m_window);
}
