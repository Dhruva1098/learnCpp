#include <iostream>
#include <vector>

int split_equally(std::vector<int> array){
    int k = 0;
    int n = array.size();
    for (int i = n - 1; i >= 0; i--) {
      if (array[i] == 1)
        k++;
    }
    return k;
}
int main(void){
    std::vector<int> array = {0,0,0,1,0,1,0,0,1,0};
    std::cout << split_equally(array);
}
