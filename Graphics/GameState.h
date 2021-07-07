#pragma once

#include "State.h"


class GameState : public State
{
public:
	GameState(sf::RenderWindow* window);
	virtual ~GameState();

	void EndState();

	void UpdateInput(const float& dt);
	void Update(const float& dt);
	void Render(sf::RenderTarget* target = nullptr);

private:
	Entity player; 
};

