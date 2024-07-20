#include <iostream>
#include <vector>

void merge(vector<int>& array, int low, int mid, int high){
	std::vector<int> temp;
	int left = 0;
	int right = mid+1;
	while(left<=mid && right<=high){
		if (array[left] <= array[right]) temp.push_back(array[left++]);
		else temp.push_back(array[right++]);
	}
	while(left<=mid) temp.push_back(array[left++]);
	while(right<=high) temp.push_back(array[right++]);
	for(int i = low; i<=high;i++){
		array[i] = temp[i-low];
}
void merge_sort(std::vector<int>& array, int low, int high){
	if(low>=high) return;
	int mid = (low + high) / 2;
	merge_sort(array, low, mid);
	merge_sort(array, mid+1, high);
	merge(array, low, mid, high);
}
