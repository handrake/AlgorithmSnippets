#pragma once
#include <vector>

template <typename T>
int partition(std::vector<T> &v, int left, int right) {
	T pivot = v[left];
	int i = left + 1, j = right;

	do {
		while (i <= right && v[i] < pivot) i++;
		while (j >= left && v[j] > pivot) j--;
		if (i < j) swap(v[i], v[j]);
	} while (i < j);

	std::swap(v[left], v[j]);

	return j;
}

template <typename T>
void quick_sort(std::vector<T> &v, int left, int right) {

	if (right > left) {
		int pivot_index = partition<T>(v, left, right);
		quick_sort<T>(v, left, pivot_index - 1);
		quick_sort<T>(v, pivot_index + 1, right);
	}
}