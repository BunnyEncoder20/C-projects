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

int main(void) {
  char str[100];
  reverse1(str);
  return 0;
}
