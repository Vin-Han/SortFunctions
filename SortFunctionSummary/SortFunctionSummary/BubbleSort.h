#pragma once
#include "BasicTools.h"

class BubbleSort :public BasicTools
{
private:
	int count;
	int* data;
public:
	BubbleSort(int count,int* data);
	~BubbleSort() { delete[]data; }
	void Sort();
	int GetCount() { return count; }
	int* GetData() { return data; }
};

