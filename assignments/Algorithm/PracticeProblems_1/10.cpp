#include <iostream>
#include <vector>
int equal_zeros_and_ones_substring(std::vector<int>& string){
    int n = string.size();
    int T[2*n + 1];
    int c = n;
    int max = 0;
    for(int i = 0; i < 2*n + 1; i++){T[i] = -1;}
    for(int i = 0; i < n; i++){
        if(string[i] == 1) c++;
        else c--;
        if(T[c] == -1) T[c] = i;
        else if( i - T[c] > max) max = i - T[c];
    }
    return max;
}
int main() {
    std::vector<int> string = {1,1,0};
    std::cout << equal_zeros_and_ones_substring(string);
}
