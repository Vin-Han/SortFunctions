#pragma once
#include "BasicTools.h"

class ShellSort:public BasicTools
{
private:
	int count;
	int* data;
	int gap;
public:
	ShellSort(int count, int* data);
	~ShellSort() { delete[]data; }
	void Sort();
	int GetCount() { return count; }
	int* GetData() { return data; }
};