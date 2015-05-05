#ifndef GUITEXT_H
#define GUITEXT_H

#include "GameObject.h"

class GUIText : public GameObject
{
public:
	GUIText();
	~GUIText();

	void render(int camX, int camY);
	void update(Uint32 deltaTime);
	void handleInput(SDL_Event e);
	void load(std::string tileID, std::string textureID, int x, int y, int width = -1, int height = -1);
};

#endif