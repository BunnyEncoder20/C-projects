#include <stdio.h>
#include <stdlib.h>

int main() {
  int age;
  float gpa;
  char grade;
  char name[30];

  printf("AGE:");
  scanf(" %d", &age);
  printf("GPA:");
  scanf(" %f", &gpa);
  printf("GRADE:");
  scanf(" %c", &grade);
  // printf("NAME: ");
  // scanf(" %s\n\n", &name);

  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Marks: %.2f\n", gpa);
  printf("Grade: %c\n", grade);

  return EXIT_SUCCESS;
}
