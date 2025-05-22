#include "SortingAlgorithms.h"


void SortingAlgorithms::Swap(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}

void SortingAlgorithms::Merge(std::vector<int>& arr, int leftIdx, int midIdx, int rightIdx)
{
	int leftlo{ leftIdx };
	int rightlo{ midIdx + 1 };

	std::vector<int> temp;

	while (leftlo <= midIdx && rightlo <= rightIdx)
	{
		if (arr[leftlo] < arr[rightlo])
		{
			temp.push_back(arr[leftlo]);
			leftlo++;
		}
		else
		{
			temp.push_back(arr[rightlo]);
			rightlo++;
		}
	}

	while (leftlo <= midIdx)
	{
		temp.push_back(arr[leftlo]);
		leftlo++;
	}
	while (rightlo <= rightIdx)
	{
		temp.push_back(arr[rightlo]);
		rightlo++;
	}

	for (int i = 0; i < temp.size(); i++)
		arr[leftIdx + i] = temp[i];
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

		while (prev >= 0 && arr[prev] > curr)
		{
			arr[prev + 1] = arr[prev];
			prev--;
		}

		arr[prev + 1] = curr;
	}
}

void SortingAlgorithms::MergeSort(std::vector<int>& arr, int leftIdx, int rightIdx)
{
	if (leftIdx == rightIdx)
		return;

	int midIdx = (leftIdx + rightIdx) / 2;
	SortingAlgorithms::MergeSort(arr, leftIdx, midIdx);
	SortingAlgorithms::MergeSort(arr, midIdx + 1, rightIdx);
	SortingAlgorithms::Merge(arr, leftIdx, midIdx, rightIdx);
}
