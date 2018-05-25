#include<stdio.h>

int main()
{
  int a = 545;
 float b = 4.5;
  char c = a;
  double d = 1.45654;  
  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));

  printf("float b value %f and size %d bytes.\n", b, sizeof(b));

  printf("char c value %c and size %d bytes.\n", c, sizeof(c));

  printf("double d value %f and size %d bytes.\n", d, sizeof(d));
}

