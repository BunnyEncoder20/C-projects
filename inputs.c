#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  getchar(); // Clear the newline character from the buffer
  printf("NAME: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0'; // Removes the newline character which comes
                                 // with the fgets() function

  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Marks: %.2f\n", gpa);
  printf("Grade: %c\n", grade);

  return EXIT_SUCCESS;
}
