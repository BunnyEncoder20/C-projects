#include <stdio.h>
#include <string.h>

// First attemp
void reverse1(char *str) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - i - 1] = temp;
  }
}

// Second attempt
void reverse2(char *str) {
  int length = strlen(str);
  for (int i = 0, j = length - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main(void) {
  char str[100] = "Soma and Bunny went to a party on Saturday night";
  printf("Original String: %s\n", str);
  // reverse1(str);
  reverse2(str);
  printf("Reversed String: %s\n", str);
  return 0;
}
