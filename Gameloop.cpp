#include "Gameloop.h"

void Gameloop::run()
{
	bool quit = false;
	SDL_Handler handler;
	if (handler.errorInit = false)
	{
		bool quit = true;
	}

	while (!quit)
	{
		while (SDL_PollEvent(&handler.event) != 0)
		{
			if (handler.event.type == SDL_QUIT)
			{
				quit = true;
				
			}
			else
			{
				//Do all the Gaming Stuff

			}
		}
	}

	if (quit)
	{
		handler.close();
	}
}
