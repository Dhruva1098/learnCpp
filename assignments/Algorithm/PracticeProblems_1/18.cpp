#include <iostream>
#include <stack>
#include <vector>
std::vector<int> largest_index_to_right(std::vector<int> array){
    int n = array.size();
    std::vector<int> out(n,-1);
    std::stack<int> stack;

    for(int i = 0; i < n ; i++){
        while(!stack.empty() && array[stack.top()] <= array[i]) {
            out[stack.top()] = i;
           stack.pop();
        }
        stack.push(i);
    }
    return out;
}
int main(){
    std::vector<int> array = {4,5,7,23,1,6,8,0,2};
    std::vector<int> out = largest_index_to_right(array);
    for(int i : out){
        std::cout << i << " ";
    };
}
