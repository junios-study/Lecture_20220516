#include "Actor.h"
#include <iostream>

AActor::AActor()
{
	std::cout << "Actor �����" << std::endl;

	Shape = ' ';
	Location.X = 0;
	Location.Y = 0;
	bCollide = false;
}

AActor::~AActor()
{
	std::cout << "�� �״´�." << std::endl;
}

void AActor::Draw()
{
}
