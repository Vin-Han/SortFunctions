#include "BasicTools.h"

void BasicTools::Print(int count, int* data)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << data[i] << "\t";
	}
	std::cout << std::endl;
}

void BasicTools::PrintDifference(int count, int* data)
{
	for (int i = 1; i < count; i++)
	{
		std::cout << data[i] - data[i-1]<< "\t" ;
	}
	std::cout << std::endl;
}

void BasicTools::IsOrdered(int count, int* data)
{
	for (int i = 1; i < count; i++)
	{
		if (data[i] < data[i - 1])
		{
			std::cout << "Array Is Not In Ordered" << std::endl;
			return ;
		}
	}
	std::cout << "Array Is In Ordered" << std::endl;
}
