#include <iostream>
#include "Image.h"
#include <vector> //container

using namespace std;

int main()
{
	std::vector<Image*> ImageList;
	
	for (int Y = 0; Y < 4096; ++Y)
	{
		for (int X = 0; X < 4096; ++X)
		{
			
			ImageList.push_back(new Image(X, Y, 165, 55, 128));
		}
	}

	cout << ImageList.size() << endl;

	//for (int i = 0; i < ImageList.size(); ++i)
	//{
	//	cout << ImageList[i]->X << ", ";
	//	cout << ImageList[i]->Y << ", ";
	//	cout << ImageList[i]->R << ", ";
	//	cout << ImageList[i]->G << ", ";
	//	cout << ImageList[i]->B << endl;
	//}


	for (int i = 0; i < ImageList.size(); ++i)
	{
		delete ImageList[i];
	}
	return 0;
}

