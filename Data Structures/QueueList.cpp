#include "QueueList.h"

QueueList::QueueList()
{
	front = rear = nullptr;
}

QueueList::~QueueList()
{
	delete front;
	delete rear;
}

void QueueList::Enqueue(int value)
{
	QueueNode* newNode = new QueueNode(value);

	if (front == nullptr && rear == nullptr)
	{
		front = rear = newNode;
		return;
	}

	rear->next = newNode;
	rear = newNode;
}

void QueueList::Dequeue()
{
	if (front == nullptr)
	{
		std::cout << "Deque failed: Queue EMPTY" << std::endl;
		return;
	}

	if (front == rear)
	{
		delete front;
		front = rear = nullptr;
		return;
	}

	QueueNode* temp = front;
	front = temp->next;
	delete temp;
}

int QueueList::Peek()
{
	if (front == nullptr)
		return -1;
	return front->data;
}

void QueueList::PrintQueue()
{
	std::cout << "FRONT";
	QueueNode* temp = front;

	while (temp->next != nullptr)
	{
		std::cout << " <- " << temp->data;
		temp = temp->next;
	}
	std::cout << " <- " << temp->data << " <- REAR" << std::endl;
}

bool QueueList::Empty()
{
	if(front == nullptr)
		return true;
	return false;
}



