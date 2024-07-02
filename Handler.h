#pragma once
#include <SDL.h>

class SDL_Handler
{
public:
	SDL_Handler();
	~SDL_Handler();

	
	bool init_mainWindow();
	bool load_mainMenu();
	void close();

	SDL_Window* mainWindow = nullptr;
	SDL_Surface* windowSurface = nullptr;
	SDL_Surface* image = nullptr;

	SDL_Event event;

	bool errorInit = false;

	const int SCREEN_WIDTH = 1080;
	const int SCREEN_HEIGHT = 720;
};