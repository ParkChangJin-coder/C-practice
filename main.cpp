#include <stdio.h>
#define _USE_MATH_DEFINDES
#include <math.h>

//point(int x, int y)

struct Point{
  int x;
  int y;
};
struct Circle{
  struct Point point;
  int radius;
};

//double CircleArea struct Circle Circle
//
double CircleArea(struct Circle circle){
  double result = M_PI*pow(circle.radius,2);
  return result;
};

int main(){
  struct Point p1 = {10, 20};
  int result = (p1.y - p1.x);
  printf("result : %d\n", result);
  
  struct Circle c1 = {{10,20}, 5};
  c1.point.x = 20;
  double resultArea = CircleArea(c1);
  printf("area : %f\n", resultArea);
  
  return 0;
}