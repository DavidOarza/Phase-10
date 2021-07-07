#pragma once

#include "MainMenuState.h"

class SfGame
{
public:
	SfGame();
	virtual ~SfGame();

	void EndApplication();

	void UpdateDt();
	void UpdateSFMLEvents();
	void Update();
	void Render();
	void Run();

private:
	sf::RenderWindow *m_window;
	sf::Event m_sfEvent;

	sf::Clock sf_dtClock;
	float m_dt;

	std::stack<State*> m_states;

	void InitWindow();
	void InitStates();
};

