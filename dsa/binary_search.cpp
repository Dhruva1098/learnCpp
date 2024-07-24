#include <vector>

int binary_search(std::vector<int>& array, int target) {
	int n = array.size();
	int low = 0; int high = n - 1;
	while (low <= high) {
		int mid = (low + high)/2;
		if (target == array[mid]) return mid;
		else if (target > array[mid]) low = mid + 1;
		else high = mid - 1;
	} return -1;
}
