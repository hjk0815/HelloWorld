


#include <iostream>
#include "Engine.h"
#include <string>
#include <vector>
#include <algorithm>
#include <chrono>		// ��ʱ��
#include <thread>



template<typename T>
void Print(T value) {
	std::cout << value << std::endl;
}

// ====== ����ָ��
void PrintValue(int value) {
	std::cout << "Value :: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) {
		func(value);
	}
}

void FuncPtr() {
	std::vector<int> values = { 1,4,2,5,4,7 };
	ForEach(values, PrintValue);
}

//  ============

// lambda ����
void LambdaFunc1() {
	std::vector<int> values = { 100,200 };
	ForEach(values, [](int value) {std::cout << "Value::" << value << std::endl; });
}

void LambdaFunc2() {
	std::vector<int> values = { 1,5,3,4 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
	std::cout << "it :: " << *it << std::endl;
}

// ��ʱ��
void timer()
{

}

int main() {
	//std::cout << "Hello World!" << std::endl;
	engine::PrintMessage();

	Print(5.5f);
	// ����ָ��
	FuncPtr();
	// lambda ����
	LambdaFunc1();
	LambdaFunc2();


	// ��ʱ��
	timer();

	// ��ά����

	std::cin.get();
} 