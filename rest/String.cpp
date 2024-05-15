#include <iostream>
#include <string>

using namespace std; // use this or you have to do std::string everywhere

int main(){
  string s1 = "Mar";
  s1 += "ty"; // Marty
  string s2 = "Cynthia";
  if(s1 > s2 && s2 != "Jay") cout << "Yes" << endl; // Operators check the alphabetical order 
  s1.append(" Stepp"); // Marty Stepp
  s1.erase(3, 2); // Mar Stepp
  s1[6] =  'o'; // Mar Stopp
  string s3 = "Hello";
  cout << s3 <<endl;
  return 0;
}
