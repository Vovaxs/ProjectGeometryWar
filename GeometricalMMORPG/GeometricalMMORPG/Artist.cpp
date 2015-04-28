#include "Artist.h"

void Artist::draw_rect(SDL_Surface * surf, int xPos, int yPos, int width, int height, int R, int G, int B){
	if (R > 255) R = 255;
	if (R < 0) R = 0;
	if (G > 255) G = 255;
	if (G < 0) G = 0;
	if (B > 255) B = 255;
	if (B < 0) B = 0;

	Uint32 color = SDL_MapRGB(surf->format, R, G, B);

	SDL_Rect rect;

	rect.x = xPos;
	rect.y = yPos;
	rect.w = width;
	rect.h = height;

	SDL_FillRect(surf, &rect, color);
}
void Artist::draw_rect_texture(){

}

void Artist::draw_circle(){

}

void Artist::draw_line(){

}

