#include <vector>

void bubble_sort_recursive(std::vector<int>& array, int n){
	if (n == 1) return;
	for (int i = 0; i < n - 1; i++) {
		if (array[i] > array[i+1]) {
			int temp = array[i+1];
			array[i+1] = array[i];
			array[i] = temp;
		}
	}
	bubble_sort_recursive(array, n - 1);
}

