#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
#include "binary_search.hpp"
#include "quick_sort.hpp"

using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	random_device rd;
	mt19937 g(rd());

	auto print = [](auto v) {
		copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
		cout << endl;
	};

	cout << binary_search<int>(v, 0, v.size() - 1, 3) << endl;

	shuffle(v.begin(), v.end(), g);

	print(v);

	quick_sort<int>(v, 0, v.size() - 1);

	print(v);

	shuffle(v.begin(), v.end(), g);

	print(v);
}