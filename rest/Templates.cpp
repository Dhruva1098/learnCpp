#include <iostream>
#include <cstring>
template<class T> //class is to signify that T is a type
T max(T x, T y){
  return x>y?x:y;
}
template<> //char * needs a specialised template for c-strings as they are pointers, not strig pointed by them
char *max<char*>(char *x, char*y){
  return strcmp(x,y)>0?x:y;
}


int main(){
  int a = 2, b = 6, imax;
  double c = 2.2, d = 4.4, dmax, Dmax;

  imax = max<int>(a,b);
  std::cout<<"Max int :" << imax <<std::endl;
  dmax = max(c,d); //here type <double> was implicitly inferred from c and d
  std::cout<<"Max double :" << dmax << std::endl;
  Dmax = max<double>(a,d);//here we have to explicitly specify double because a and d are not of same types
  std::cout<<"Dmax double :"<< dmax <<std::endl;
}
