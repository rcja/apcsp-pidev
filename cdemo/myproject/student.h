#include <stdio.h>
#include <string.h>

struct Student {
  char first[50];
  char last[50];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("The student is -\n");
  printf("  first:%s\n", student->first);
  printf("  last:%s\n", student->last);
  printf("  age:%d\n", student->age);
  printf("  id:%d\n", student->studentid);
}

