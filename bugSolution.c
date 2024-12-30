#include <stdio.h>

int main() {
  int x = 10;
  int y = 0;

  if (y == 0) {
    fprintf(stderr, "Error: Division by zero\n");
    return 1; // Indicate an error
  }

  int z = x / y;
  printf("Result: %d\n", z);
  return 0;
}