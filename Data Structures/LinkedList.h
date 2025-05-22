#pragma once
#include <iostream>

struct Node
{
	int data;
	Node* next;
	Node()
	{
		this->data = 0;
		this->next = nullptr;
	}
	Node(int data)
	{
		this->data = data;
		this->next = nullptr;
	}
	Node(int data, Node* next)
	{
		this->data = data;
		this->next = next;
	}
	~Node()
	{
		std::cout << std::endl << "... Node Obj Destroyed ..." << std::endl;
	}
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	
	Node* GetHead() const;
	void SetHead(Node* head);
	void PushFront(int value);
	void PushBack(int value);
	void PopFront();
	void PopBack();
	void InsertNode(int value, int position);
	void PrintList(Node* head);
	int Length();
	Node* ReverseList(Node* head);
	Node* RecursiveReverse(Node* head);
	void UseRecursiveReverse();
	Node* MidOfList(Node* head);
	bool IsListPalindrome(Node* head);

private:
	Node* head;
	Node* tail;
};

