#include "StackArr.h"

StackArr::StackArr()
{
	top = -1;
}

StackArr::~StackArr()
{
	delete[] stack;
}

void StackArr::Push(int value)
{
	top++;
	stack[top] = value;
}

void StackArr::Pop()
{
	if (top == -1)
		return;
	std::cout << "Pop: " << stack[top] << std::endl;
	top--;
}

int StackArr::Peek()
{
	int peek = (top == -1) ? 0 : stack[top];
	return peek;
}

bool StackArr::Empty()
{
	bool isEmpty = (top == -1) ? false : true;
	return isEmpty;
}

void StackArr::PrintStack()
{
	if (top == -1)
	{
		std::cout << "Stack EMPTY" << std::endl;
		return;
	}
	
	std::cout << "Stack:" << std::endl;
	int temp{ top };
	
	while (temp >= 0)
	{
		std::cout << stack[temp] << std::endl;
		temp--;
	}

}