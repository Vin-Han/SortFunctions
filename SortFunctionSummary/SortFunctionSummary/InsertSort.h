#pragma once
#include "BasicTools.h"

class InsertSort :public BasicTools
{
private:
	int count;
	int* data;
public:
	InsertSort(int count, int* data);
	~InsertSort() { delete[]data; }
	void Sort();
	int GetCount() { return count; }
	int* GetData() { return data; }
};