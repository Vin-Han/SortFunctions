#include "BasicTools.h"

void BasicTools::Print(int* data, int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << data[i] << "\t";
	}
	std::cout << std::endl;
}

void BasicTools::PrintDifference(int* data, int count)
{
	for (int i = 1; i < count; i++)
	{
		std::cout << data[i] - data[i-1] ;
	}
	std::cout << std::endl;
}
