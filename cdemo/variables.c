#include<stdio.h>

int main()
{
	int a = 2;
	int b = 3;
	int c;
	
	c = a + b;
	printf("The sum of %d and %d is %d.\n",a,b,c);

	int temp = c;
	c = a;
	a = temp;

	printf("Now a is %d and c is %d\n",a,c);
}
