#pragma once

#include "Entity.h"

class State
{
public:
	State(sf::RenderWindow* window);
	virtual ~State();

public:
	const bool& GetQuit() const;

	virtual void CheckForQuit();

	virtual void EndState() = 0;
	virtual void UpdateMousePositions();
	virtual void UpdateInput(const float& dt) = 0;
	virtual void Update(const float& dt) = 0;
	virtual void Render(sf::RenderTarget* target = nullptr) = 0;

protected:
	sf::RenderWindow* m_window;
	std::vector<sf::Texture> m_textures;
	bool quit = false;

	sf::Vector2i mousePosScreen;
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;

private:

};

