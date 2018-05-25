#include <stdio.h>

int arrayAdd(int* s, int n)
{
  for (int i = 0; i<100; i++)
  {
    *(s+i) += n; 
  }
}

int main ()
{
  int arr[100];
  for (int i = 0; i<100; i++)
  {
    arr[i] = i*i;
    printf("%d ,",arr[i]);
  }
  printf("\n");

  arrayAdd((int*)&arr, 5);

  for (int k = 0; k<100; k++)
  {
    printf("%d, ",arr[k]);
  }

  printf("\n");
}
