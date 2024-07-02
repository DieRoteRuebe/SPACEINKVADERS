#include <iostream>
#include "Handler.h"
#include <SDL.h>

SDL_Handler::SDL_Handler()
{
	errorInit =  init_mainWindow();
}


SDL_Handler::~SDL_Handler()
{
	close();
}

bool SDL_Handler::init_mainWindow()
{
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL init failed" << SDL_Error << ": \n" << SDL_GetError() << "\n";
		success = false;
	}
	else
	{
		//create the Mainwindow const str Title, pos vertical, pos horizontal..., set to shown
		mainWindow = SDL_CreateWindow("SPACEINKVADER.INK", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (!mainWindow)
		{
		std::cout << "Failed to create the mainwindow" << SDL_Error << ": \n" << SDL_GetError() << "\n";
		success = false;
		}
		else
		{
			windowSurface = SDL_GetWindowSurface(mainWindow);
		}
	}
	return success;
}

bool SDL_Handler::load_mainMenu()
{
	bool success = true;
	return success;
}

void SDL_Handler::close()
{
	SDL_FreeSurface(windowSurface);
	windowSurface = NULL;
	SDL_DestroyWindow(mainWindow);
	mainWindow = NULL;

	SDL_Quit();
}
