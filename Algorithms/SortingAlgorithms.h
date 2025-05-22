#pragma once

#include<iostream>
#include <vector>

class SortingAlgorithms
{
private:
	static void Swap(int &x, int &y);
	static void Merge(std::vector<int>& arr, int left, int mid, int right);

public:
	static void BubbleSort(std::vector<int> &arr);
	static void SelectionSort(std::vector<int>& arr);
	static void InsertionSort(std::vector<int>& arr);
	static void MergeSort(std::vector<int>& arr, int left, int right);

};

