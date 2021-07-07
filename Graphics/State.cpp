#include "State.h"

State::State(sf::RenderWindow* window) :
	m_window(window) {}

State::~State()
{
}

const bool& State::GetQuit() const
{
	return this->quit;

}

void State::CheckForQuit()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		this->quit = true;
	}
}

void State::UpdateMousePositions()
{
	this->mousePosScreen = sf::Mouse::getPosition();
	this->mousePosWindow = sf::Mouse::getPosition(*this->m_window);
	this->mousePosView = this->m_window->mapPixelToCoords(sf::Mouse::getPosition(*this->m_window));
}
