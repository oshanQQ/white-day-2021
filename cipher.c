#include <stdio.h>

int main(void) {
  char cipher[100] = { "URL" };

  for (int i = 0; cipher[i] != '\0'; i++) {
    cipher[i] = 'Z' - cipher[i] + 'A';
  }
  printf("%s\n", cipher);

  return 0;
}