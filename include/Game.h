#pragma once

#include "main.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"

#include <vector>


class Game
{
private:
	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
	SDL_Rect m_sourceRectangle;
	SDL_Rect m_destinationRectangle;
	int m_currentFrame;
	static Game* s_pInstance;
	std::vector<GameObject*> m_gameObjects;

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
	static Game* Instance() {
		if (s_pInstance == 0) {
			s_pInstance = new Game();
			return s_pInstance;
		}
		return s_pInstance;
	}
	SDL_Renderer* getRenderer() const { return m_pRenderer; }




};
typedef Game TheGame;