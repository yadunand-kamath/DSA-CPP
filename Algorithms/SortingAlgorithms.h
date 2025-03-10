#pragma once

#include <vector>

class SortingAlgorithms
{
private:
	static void Swap(int &x, int &y);

public:
	static void BubbleSort(std::vector<int> &arr);
	static void SelectionSort(std::vector<int>& arr);
	static void InsertionSort(std::vector<int>& arr);

};

