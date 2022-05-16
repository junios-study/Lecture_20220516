#include "Actor.h"
#include <iostream>

AActor::AActor()
{
	std::cout << "Actor 만들기" << std::endl;

	Shape = ' ';
	Location.X = 0;
	Location.Y = 0;
	bCollide = false;
}

AActor::~AActor()
{
	std::cout << "난 죽는다." << std::endl;
}

void AActor::Draw()
{
}
