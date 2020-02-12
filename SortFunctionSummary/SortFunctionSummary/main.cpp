#include <ctime>
#include <iostream>
#include<time.h>

#include "SelectSort.h"
#include "BubbleSort.h"
#include "InsertSort.h"
#include "ShellSort.h"

#pragma region TimeCalculateFunction
typedef void (*FuncPoint)(int);
typedef const char* FuncName;
template<typename DateName>
void TimeCalculate(const char* IDNmae, DateName a, void(*Func)(int) = NULL) {
	try {
		if (!Func)throw IDNmae;
		clock_t startTime = clock();
		Func(a);
		clock_t endTime = clock();
		std::cout << "Time Duration :" << ((double)endTime - (double)startTime) / CLOCKS_PER_SEC << std::endl;
	}
	catch (const char* msg) { std::cout << msg << " is wrong" << std::endl; }
}
#pragma endregion

const int arrayLength = 10000;

void main() {
	srand((unsigned)time(NULL));
	clock_t startTime, endTime;

#if 0
	FuncName TestName = "TestName";
	TimeCalculate(TestName, 0);

	TimeCalculate(TestName, 0, NULL);

	auto TestFunc = [](int a)->void { for (int i = 0; i < 1000000; i++)a++; };
	TimeCalculate(TestName, 0, TestFunc);

	FuncPoint FuncP = NULL;
	TimeCalculate(TestName, 0, FuncP);

	FuncP = TestFunc;
	TimeCalculate(TestName, 0, FuncP);
#endif // Sample Functions

#pragma region Generate Number Array
	int* tempData = new int[arrayLength];
	for (int i = 0; i < arrayLength; i++){
		tempData[i] = rand() % arrayLength;
	#if 1
		for (int j = 0; j < i; j++)
		{
			if (tempData[i] == tempData[j])i--;
		}
	#endif // if have same number
	}
#pragma endregion


#if 0
	SelectSort* selectSort = new SelectSort(arrayLength,tempData);
	startTime = clock();
	selectSort->Sort();
	endTime = clock();
	std::cout << "Time Duration :" << ((double)endTime - (double)startTime) / CLOCKS_PER_SEC << std::endl;
	selectSort->PrintDifference(selectSort->GetCount(), selectSort->GetData());
	delete selectSort;
#endif // SelectSort function

#if 0
	BubbleSort* bubbleSort = new BubbleSort(arrayLength, tempData);
	startTime = clock();
	bubbleSort->Sort();
	endTime = clock();
	std::cout << "Time Duration :" << ((double)endTime - (double)startTime) / CLOCKS_PER_SEC << std::endl;
	bubbleSort->IsOrdered(bubbleSort->GetCount(), bubbleSort->GetData());
	delete bubbleSort;
#endif // BubbleSort function

}