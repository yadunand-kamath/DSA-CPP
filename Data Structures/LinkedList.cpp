#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = tail = nullptr;
}

LinkedList::~LinkedList()
{
	std::cout << std::endl << "... LinkedList Obj Destroyed ..." << std::endl;
}

void LinkedList::PushFront(int value)
{
	Node* newNode = new Node(value);

	if (head == nullptr)
	{
		head = tail = newNode;
		return;
	}

	newNode->next = head;
	head = newNode;
}

void LinkedList::PushBack(int value)
{
	Node* newNode = new Node(value);

	if (head == nullptr)
	{
		head = tail = newNode;
		return;
	}

	tail->next = newNode;;
	tail = newNode;
}

void LinkedList::PopFront()
{
	if (head == nullptr)
		return;

	Node* temp{ head };
	head = temp->next;
	delete temp;
}

void LinkedList::PopBack()
{
	if (head == nullptr)
		return;

	Node* temp{ head };

	while (temp->next != tail)
		temp = temp->next;
		
	temp->next = nullptr;
	delete tail;
	tail = temp;
}

void LinkedList::InsertNode(int value, int position)
{
	if (head == nullptr || position < 0)
		return;
	else if (position == 0)
	{
		PushFront(value);
		return;
	}
	else if (position >= Length())
	{
		PushBack(value);
		return;
	}

	int pos{ 0 };
	Node* temp{ head };
	Node* prevNode{};
	while (temp->next != nullptr)
	{
		if (pos == position)
			break;
		prevNode = temp;
		temp = temp->next;
		pos++;
	}

	Node* newNode = new Node(value);
	prevNode->next = newNode;
	newNode->next = temp;
}

void LinkedList::PrintList()
{
	if (head == nullptr)
	{
		std::cout << "LinkedList EMPTY" << std::endl;
		return;
	}

	Node* temp{ head };

	while (temp->next != nullptr) 
	{
		std::cout << temp->data << " -> ";
		temp = temp->next;
	}
	std::cout << temp->data << " -> NULL" << std::endl;
}

int LinkedList::Length()
{
	if (head == nullptr)
		return 0;

	Node* temp{ head };
	int length{ 1 };

	while (temp->next != nullptr)
	{
		temp = temp->next;
		length++;
	}
	return length;
}

void LinkedList::ReverseList()
{
	Node* prevNode{ nullptr };
	Node* currNode{ head };
	Node* nextNode{ nullptr };

	while (currNode != nullptr)
	{
		nextNode = currNode->next;
		currNode->next = prevNode;
		prevNode = currNode;
		currNode = nextNode;
	}

	head = prevNode;
}
