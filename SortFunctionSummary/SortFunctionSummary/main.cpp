#include <ctime>
#include <iostream>

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

void main() {
	FuncName TestName = "TestName";
	TimeCalculate(TestName, 0);
	TimeCalculate(TestName, 0, NULL);

	auto TestFunc = [](int a)->void { for (int i = 0; i < 1000000; i++)a++; };
	TimeCalculate(TestName, 0, TestFunc);

	FuncPoint FuncP = NULL;
	TimeCalculate(TestName, 0, FuncP);

	FuncP = TestFunc;
	TimeCalculate(TestName, 0, FuncP);
}