#include "stdafx.h"
class Artist {
public:
	void draw_rect(SDL_Surface * surf, int xPos, int yPos, int width, int height, int R, int G, int B);
	void draw_rect_texture();
	void draw_circle();
	void draw_line();
};

