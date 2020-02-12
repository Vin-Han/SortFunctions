#pragma once
#include "BasicTools.h"

class SelectSort :public BasicTools
{
private:
	int count;
	int* data;
public:
	SelectSort(int count, int* data);
	~SelectSort() { delete[]data; }
	void Sort();
	int GetCount() { return count; }
	int* GetData() { return data; }
};