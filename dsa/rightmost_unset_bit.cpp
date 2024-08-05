#include <iostream>
int setBit(int n) {
  for(int i = 1;; i=i*2){
    std::cout<<i<<" " << (i&n) << " "<<(n|i) <<"\n";
    if((i&n) == 0){ n = n|i; break;} 
  }return n;
}

