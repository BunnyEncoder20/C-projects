#include <stdint.h>
#include <stdio.h>

int cal(int m, int n) { return m * n; }
int main(void) {
  // uint8_t a = 256;
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = arr;

  // We change the array index value in the same using both the arr and it's
  // pointer p
  arr[0] = 0;
  p[1] = 1;

  // Checkout the following pointer arthri
  printf("p = %p\n", p);
  printf("p + 2 = %p\n", p + 2);
  // NOTE: not addr + 2 but addr + 2 * sizeof(int)

  for (int i = 0; i < 5; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  return 0;
}
