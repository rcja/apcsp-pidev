#include <stdio.h>

float areaOfCircle(float radius)
{
  float area = radius * radius * 3.14;
  return area;
}

int userInput(char* message)
{
  char input[256];
  int radius;

  printf("%s\n",message);
  fgets(input, 256, stdin);
  sscanf(input, "%d", &radius);  
  return radius;
}

int main (int argc, char* argv[])
{
 int arg1;
 int arg2;
 if (argc != 3)
 {
  arg1 = userInput("Radius: ");
  arg2 = userInput("Max Value: ");
 }
 else
 {
   int found = sscanf(argv[1], "%d", &arg1);
   if (found != 1)
   {
    arg1 = userInput("Radius: ");
    arg2 = userInput("Max Value: ");
   
   }
    found = sscanf(argv[2], "%d", &arg2);
   if (found != 1)
   {
     arg1 = userInput("Radius: ");
    arg2 = userInput("Max Value: ");
   }
 }

 for (float i = arg1; i <= arg2; i++ )
 {
    float area = areaOfCircle(i);
    printf("The area of a circle with radius of %f is %f\n",i,area);
 }
}
