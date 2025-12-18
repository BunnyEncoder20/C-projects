#include <stdio.h>

int main() {
  // NOTE: Law of pointer-array equivalence:
  // a[b] == *(a + b)
  int arr[] = {11, 22, 33, 44, 55};

  // Consider the followwing examples:
  int *p = arr; // p points to the address of the first element of arr
  printf("*p = %i\n", *p); // *p points to the first element of arr, prints 11

  // Consider the following array loops (all the same)
  for (int i = 0; i < 5; i++) {
    printf("arr[%d] = %d\n", i, arr[i]); // array notation with arr
  }

  for (int i = 0; i < 5; i++) {
    printf("p[%d] = %d\n", i, p[i]); // array notation with p
  }

  for (int i = 0; i < 5; i++) {
    printf("*(arr + %d) = %d\n", i, *(arr + i)); // pointer notation with arr
  }

  for (int i = 0; i < 5; i++) {
    printf("*(p + %d) = %d\n", i, *(p + i)); // pointer notation with p
  }

  for (int i = 0; i < 5; i++) {
    printf("*p = %d\n", *(p++)); // moving pointer forword
    // printf("%d\n", *(arr++));  // BUG: Moving array variable forword
  }
  return 0;
}
