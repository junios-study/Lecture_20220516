#include <iostream>
#include "Wall.h"
#include "Player.h"


int main()
{
	AActor* MyActor = new AActor();

	delete MyActor;
	MyActor = nullptr;


	std::cout << "이건 메인 끝" << std::endl;


	return 0;
}
