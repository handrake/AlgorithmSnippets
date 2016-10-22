#pragma once
#include <vector>

template <typename T>
int binary_search(const std::vector<T> &v, int left, int right, T x) {
	int mid = (left + right) / 2;

	if (left <= right) {
		if (v[mid] == x) return mid;
		else if (v[mid] > x) return binary_search(v, left, mid - 1, x);
		else return binary_search(v, mid + 1, right, x);
	}

	return -1;
}