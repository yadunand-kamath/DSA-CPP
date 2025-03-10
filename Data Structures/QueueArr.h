#pragma once
#include<iostream>
class QueueArr
{
public:
	QueueArr();
	~QueueArr();

	void Enqueue(int value);
	void Dequeue();
	int Peek();
	bool Empty();
	void PrintQueue();

private:
	int front{}, rear{};
	int* queue = new int[20];
};

