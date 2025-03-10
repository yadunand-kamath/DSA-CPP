#pragma once
#include<iostream>
struct StackNode
{
	int data;
	StackNode* next;
	StackNode(int value)
	{
		this->data = value;
		this->next = nullptr;
	}
	~StackNode()
	{

	}
};
class StackList
{
public:
	StackList();
	~StackList();

	void Push(int value);
	void Pop();
	int Peek();
	bool Empty();
	void PrintStack();

private:
	StackNode* top{};
};

