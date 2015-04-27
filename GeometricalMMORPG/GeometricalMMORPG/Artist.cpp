#include "Artist.h"

void draw_rect(SDL_Surface * surf){
	Uint32 color = SDL_MapRGB(surf->format, 255, 0, 255);

	SDL_Rect test;

	test.x = 100;
	test.y = 200;
	test.w = 100;
	test.h = 100;

	SDL_FillRect(surf, &test, color);
}
void draw_rect_texture(){

}

void draw_circle(){

}

void draw_line(){

}

