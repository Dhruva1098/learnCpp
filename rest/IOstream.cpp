#include <iostream>
#include <fstream>

 int main()
 {
  std::ifstream input;
  input.open("C:/Users/dhruv/Desktop/test.txt");
  std::string line;
  int sum = 0;
  while(getline(input, line))
  { 
    sum += stoi(line);
  }
  std::cout << sum << std::endl;
  input.close();
  return 0;
 }