#include <vector>

void partition(std::vector<int>& array, int low, int high) {
	int pivot = array[low];
	int i = low;
	ing j = highl
	while (i < j) {
		while (array[i] <= pivot && i <= high - 1) {
			i++;
		}
		while (array[j] > pivot && j >= low + 1) {
			j--;
		}
		if (i < j) swap(array[i], array[j]);
	}
	swap(array[low], array[j]);
	return j;
}
void quick_sort(std::vector<int>& array, int low, int high) {
	if (low < high) {
		int pIndex = partition(arr, low, high);
		quick_sort(arr, low, pIndex - 1);
		quick_sort(arr, pIndex + 1, high);
	}
}
