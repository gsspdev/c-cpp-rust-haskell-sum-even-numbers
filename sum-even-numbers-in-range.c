#include <stdio.h>
#include <stdlib.h>

int calculate(int bottom, int top) {
  if (bottom <= top) {
    int sum = 0;

    for (int number = bottom; number <= top; number++) {
      sum += number;
    }
    return sum;
  } else {
    return 0;
  }
}

int main() { printf("the sum is %d", calculate(1, 10)); }
