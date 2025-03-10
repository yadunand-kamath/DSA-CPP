#pragma once
#include<iostream>
struct QueueNode
{
	int data;
	QueueNode* next;
	QueueNode(int value)
	{
		this->data = value;
		this->next = nullptr;
	}
	~QueueNode()
	{

	}
};
class QueueList
{
public:
	QueueList();
	~QueueList();

	void Enqueue(int value);
	void Dequeue();
	int Peek();
	void PrintQueue();
	bool Empty();

private:
	QueueNode* front{};
	QueueNode* rear{};
};

