#pragma once
#include<iostream>
#include<vector>
class StackArr
{
public:
	StackArr();
	~StackArr();
	void Push(int value);
	void Pop();
	int Peek();
	bool Empty();
	void PrintStack();
private:
	int top{};
	int* stack = new int[20];
};

