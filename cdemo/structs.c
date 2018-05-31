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

int main()
{
 char input[256];
 int num;
 printf("Number of Students: ");
 fgets (input, 256, stdin);
 sscanf(input, "%d", &num);
  
 struct Student student[num];

 for (int i = 0; i < num; i++)
 {
  printf("First name: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%s\n", &student[i].first);

  printf("Last name: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%s\n", &student[i].last);

  printf("Age: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%d\n", &student[i].age);

  printf("Student ID: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%d\n", &student[i].studentid);
 }

 for (int i = 0; i<num;i++)
 {
  printStudent(&student[i]);
 }
}
