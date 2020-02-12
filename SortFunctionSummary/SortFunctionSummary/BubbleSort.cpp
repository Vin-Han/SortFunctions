#include "BubbleSort.h"

BubbleSort::BubbleSort(int count, int* data)
{
	this->count = count;
	this->data = new int[count];
	for (int i = 0; i < count; i++)
	{
		this->data[i] = data[i];
	}
}

void BubbleSort::Sort()
{
	for (int i = count-1; i > 0; i--)
	{
		int maxIndex = i;
		for (int j = 0; j < i; j++)
		{
			if (data[j] > data[maxIndex]) maxIndex = j;
		}
		std::swap(data[i], data[maxIndex]);
	}
}