#include <iostream>
#include <vector>
#define vi std::vector<int>

class heap {
  public:
  vi arr;
  void buh(int n){
    int p = (n- 1)/2;
    while(p >= 0 && arr[p] > arr[n]){
      int temp = arr[p];
      arr[p] = arr[n];
      arr[n] = temp;
      n = p;
      p = (n - 1) / 2;
    }
  }
  void insert(int a){
    arr.push_back(a);
    buh(arr.size());
  }
  void print_heap(){
    for(int it : arr) {
      std::cout << it << " ";
    }
  }
  heap(int in[])  {
    int n = sizeof(in)/sizeof(int);
    for(int i = 0; i < n; i++){
      insert(in[i]);
    }
  }
};
int main(){
  int in[5] = {1,4,3,4,1};
  heap heap_in(in);
  heap_in.print_heap();

}
