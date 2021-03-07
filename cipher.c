#include <stdio.h>

int main(void) {
  char cipher[100] = { "3''+(all$32'6n7:\"nikijm%6)86/m:++l" };

  for (int i = 0; cipher[i] != '\0'; i++) {
    cipher[i] = 'Z' - cipher[i] + 'A';
  }
  printf("%s\n", cipher);

  return 0;
}