#include <vector>

void insertion_sort(std::vector<int> array, int size) {
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j > 0 && array[j-1] > array [j]) {
			int temp = array[j-1];
			array[j-1] = array[j];
			array[j] = temp;
			j--;
		}
	}
}
