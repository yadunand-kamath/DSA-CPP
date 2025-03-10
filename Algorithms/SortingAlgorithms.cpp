#include "SortingAlgorithms.h"


void SortingAlgorithms::Swap(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}

void SortingAlgorithms::BubbleSort(std::vector<int>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++) 
	{
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] < arr[i])
				Swap(arr[i], arr[j]);
		}
	}
}

void SortingAlgorithms::SelectionSort(std::vector<int>& arr)
{
	for (int i = 0; i < arr.size() - 1; i++)
	{
		int smallestIdx = i;

		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] < arr[smallestIdx])
				smallestIdx = j;
		}

		if (smallestIdx != i)
			Swap(arr[i], arr[smallestIdx]);
	}
}

void SortingAlgorithms::InsertionSort(std::vector<int>& arr)
{
	for (int i = 1; i < arr.size(); i++)
	{
		int curr = arr[i];
		int prev = i - 1;

		while (arr[prev] > curr && prev >= 0)
		{
			arr[prev + 1] = arr[prev];
			prev--;
		}

		arr[prev + 1] = curr;
	}
}
