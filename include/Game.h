#pragma once

#include "main.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"

#include <vector>


class Game
{
public:
	Game() { }
	~Game() { }

	bool init(const char* title, int xpos, int ypos, int height, int width, int flags);
	void render();
	void update();
	bool running();
	void handleEvents();
	void clean();
	/*typedef struct SDL_Rect
	{
		int x, y;
		int w, h;
	} SDL_Rect;
	*/


private:
	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
	SDL_Rect m_sourceRectangle;
	SDL_Rect m_destinationRectangle;
	int m_currentFrame;

	std::vector<GameObject*> m_gameObjects;

};