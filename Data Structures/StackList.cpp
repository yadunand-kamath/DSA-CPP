#include "StackList.h"

StackList::StackList()
{
	top = nullptr;
}

StackList::~StackList()
{
}

void StackList::Push(int value)
{
	StackNode* newNode = new StackNode(value);

	if (top == nullptr)
	{
		top = newNode;
		return;
	}
	newNode->next = top;
	top = newNode;
}

void StackList::Pop()
{
	if (top == nullptr)
	{
		std::cout << "Pop Failed: Stack already EMPTY" << std::endl;
		return;
	}
	StackNode* temp = top;
	top = temp->next;
	delete temp;
}

int StackList::Peek()
{
	if (top == nullptr)
		return -1;
	
	return top->data;
}

bool StackList::Empty()
{
	if (top == nullptr)
		return true;
	else
		return false;
}

void StackList::PrintStack()
{
	StackNode* temp = top;
	std::cout << "STACK: " << std::endl;
	while (temp != nullptr)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}
