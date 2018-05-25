#include <stdio.h>

int main()
{
  int a = 0;
  int b = 2;
  int c = 5;
  int d = 2;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  if (!c==0)
  {
    printf("c is not 0\n");
  }
  if (b>a)
  {
    printf("b is greater than a\n");

  }
  if (d >= b)
  {
    printf("d is greater than or equal to b\n");

  }
  if (a <= b)
  {
    printf("a is less than or equal to b\n");
  }
  if (a < b)
  {
    printf("a is less than b\n");
  }
  if (a < b && c>b)
  {
    printf("a is less b and c is greater than b\n");
  }
  if (a >= b || c==5)
  {
    printf("a is less than or equal to b or c equals 5\n");
  }

}
