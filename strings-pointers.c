#include <stdio.h>
#include <string.h>

long get_string_length(char *str) {
  int idx = 0;
  while (str[idx] != '\0') {
    idx++;
  }
  return idx;
}

void copy_string(char *source, char *destination) {
  int idx = 0;
  while (source[idx] != '\0') {
    destination[idx] = source[idx];
    idx++;
  }
  destination[idx] = '\0'; // Null-terminate the destination string
}

int main() {
  char s1[] = "Soma is my bestie";
  char *s2 = "Soma is my bestie";
  printf("%s\n%s\n", s1, s2);
  printf("length of string = %lu bytes\n", strlen(s1));
  printf("length of string = %lu bytes\n", get_string_length(s1));

  for (int i = 0; i < sizeof(s1); i++) {
    printf("s1[%d]=%c | s2[%d]=%c \n", i, s1[i], i, *(s2 + i));
  }

  // copying strings
  char src_str[100] = "This is the characters from the source string";
  char blank_str[100];
  copy_string(src_str, blank_str);
  printf("The Blank string now holds: %s\n", blank_str);
}
