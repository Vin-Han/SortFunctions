#include "SelectSort.h"

SelectSort::SelectSort(int count, int* data)
{
	this->count = count;
	this->data = new int[count];
	for (int i = 0; i < count; i++)
	{
		this->data[i] = data[i];
	}
}

void SelectSort::Sort()
{
	for (int i = 0; i < count; i++)
	{
		int mixIndex = i;
		for (int j = i + 1; j < count; j++)
		{
			if (data[j] < data[mixIndex]) mixIndex = j;
		}
		std::swap(data[i], data[mixIndex]);
	}
}
