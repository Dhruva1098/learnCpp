#include <vector>

void quick_sort(std::vector<int>& array, int low, int high) {
	if (low < high) {
		int pIndex = partition(arr, low, high);
		quick_sort(arr, low, pIndex - 1);
		quick_sort(arr, pIndex + 1, high);
	}
}
