#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor(); //������, Constructor
	~AActor(); //�Ҹ���, Destructor

	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};

