#include <iostream>

void insertion_sort_recursive(std::vector<int>& array, int i, int n) {
	if (i == n) return;
	int j = i;
	while (j > 0 && array[j] > array[j-1]) {
		int temp = array[j-1];
		array[j-1] = array[j];
		array[j] = temp;
		j--;
	}
	insertion_sort_recursive(array, i+1, n);
}

