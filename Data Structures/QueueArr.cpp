#include "QueueArr.h"

QueueArr::QueueArr()
{
	front = rear = -1;
}

QueueArr::~QueueArr()
{
	delete[] queue;
}

void QueueArr::Enqueue(int value)
{
	rear++;
	queue[rear] = value;

	if (front == -1)
		front++;
}

void QueueArr::Dequeue()
{
	if (front == -1)
	{
		std::cout << "Deque Failed: Queue EMPTY" << std::endl;
		return;
	}

	std::cout << "Dequeue: " << queue[front] << std::endl;
	if (front == rear)
		front = rear = -1;
	else
		front++;
}

int QueueArr::Peek()
{
	if (front == -1)
		return -1;
	return queue[front];
}

bool QueueArr::Empty()
{
	if(front == -1 || front >= rear)
		return true;
	return false;
}

void QueueArr::PrintQueue()
{
	std::cout << "FRONT" << std::endl;
	int temp{ front };

	while (temp <= rear)
	{
		std::cout << queue[temp] << std::endl;
		temp++;
	}
	std::cout << "REAR" << std::endl;
}

