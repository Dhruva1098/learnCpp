// a simple program which implements a 3d vector using structures 
#include <iostream>
#include <cmath>
#include <math.h>

struct V3 {
   double x, y, z;
   double length(){ // this is a member function. Passes by reference by default
    return sqrt(x*x+y*y+z*z);
   }
   V3 addVectors( V3 b){
    return {x+b.x, y+b.y, z+b.z};
   }
   V3 scaleVector(int f){
    return { x*f, y*f, z*f};
   }
   };

int main() {
	V3 u, a, s; //velocity, accleration and distance. We will use the formula s = ut + at^2/2 to calculate the distance covered where t is a scalar(time).
	double t;
	u = { 0,0,0 };
	a = { 1,0,0 };
	for (t = 0; t < 10; t++) {
		std::cout << u.scaleVector(t).addVectors(a.scaleVector(t*t/2)).length()<< std::endl;
	}
}
