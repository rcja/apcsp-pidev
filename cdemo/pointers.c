#include <stdio.h>

int main()
{
  
  int a = 1;
  int* ptrtoa;
  float d = 1.00;
  float e = 2.00;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  ptrtoa = &a;


  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  printf("The address of d is %d\n", &d);
  printf("The address of e is %d\n", &e);


  d = 6.00;
  printf("The value of d is %f\n", d);
  
  *ptrtod = 8.00;
  printf("The value of d is now  %f\n", d);

  e  = 7.00;
  printf("The value of e is %f\n", e);
  
  *ptrtoe = 9.00;
  printf("The value of e is now %f\n", e);

}
