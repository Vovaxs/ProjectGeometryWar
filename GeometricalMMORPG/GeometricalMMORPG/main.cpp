#include "stdafx.h"
#include "Frame.h"
#include "Artist.h"

int  main(int argc, char* args[])
{
	Frame frame;
	//Start up SDL and create window
	if (!frame.init())
	{
		printf("Failed to initialize!\n");
		system("pause");
	}
	else
	{
		//Load media
		if (!frame.loadMedia())
		{
			printf("Failed to load media!\n");
			system("pause");
		}
		else
		{
			//Main loop flag
			bool quit = false;

			//Event handler
			SDL_Event e;

			Artist artist;
			int r = 0;
			int g = 0;
			int b = 0;
			//While application is running
			while (!quit)
			{
				
				artist.draw_rect(frame.gScreenSurface, 100, 100, 100, 100, r, g, b);

				r = rand() % 255;
				g = rand() % 255;
				b = rand() % 255;
				
				
				
				//Handle events on queue
				while (SDL_PollEvent(&e) != 0)
				{
					//User requests quit
					if (e.type == SDL_QUIT)
					{
						quit = true;
					}
				}

				//Apply the image
				//SDL_BlitSurface(gXOut, NULL, gScreenSurface, NULL);

				//Update the surface
				SDL_UpdateWindowSurface(frame.gWindow);
			}
		}
	}

	//Free resources and close SDL
	frame.close();

	return 0;
}
