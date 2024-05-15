//Example for how c++ can return two values from a same function
#include <iostream>
#include <cmath>

void quadratic (int a, int b, int c, double& root1, double& root2)
{
  root1 = (-b + sqrt(b*b - 4*a*c))/2*a;
  root2 = (-b - sqrt(b*b - 4*a*c))/2*a;
}


int main()
{
  double root1, root2; 
  quadratic(1, -3, -4, root1, root2);
  std::cout << "the roots of the equation are " << root1 << " and " << root2 << std::endl;
  return 0;
} 