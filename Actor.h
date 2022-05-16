#pragma once
#include "Vector2D.h"

class AActor
{
public:
	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};

