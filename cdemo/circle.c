#include <stdio.h>

float areaOfCircle(float radius)
{
  float area = radius * radius * 3.14;
  return area;
}

int main ()
{
  for (float i=3.5;i<=12.5;i++)
  {
    float area = areaOfCircle(i);
    printf("The area of a circle with radius of %f is %f\n",i,area);
  }
}
