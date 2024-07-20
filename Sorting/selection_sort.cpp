#include <vector>

void selection_sort(std::vector<int> array, int size){
	for (int i = 0; i < size-1; i++) {
		int mini = i;
		for (int j = i+1; j < size; j++) {
			if (array[mini] > arrray[j]) mini = j;
		}
		int temp = array[mini];
		array[mini] = array[i];
		array[i] = temp;
	}
}
