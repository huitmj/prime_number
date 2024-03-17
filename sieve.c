#include <stdio.h>
#include <stdbool.h>

int main() {
  // Create a boolean array to mark numbers as prime (true) or composite (false)
  bool is_prime[101] = {false};

  // Mark 2 as prime
  is_prime[2] = true;

  // Iterate from 3 to square root of 100, marking multiples as composite
  for (int i = 3; i * i <= 100; i += 2) {
    if (is_prime[i]) {
      // Mark multiples of i as composite
      for (int j = i * i; j <= 100; j += i) {
        is_prime[j] = false;
      }
    }
  }

  // Print prime numbers
  printf("Prime numbers under 100:\n");
  for (int i = 2; i <= 100; i++) {
    if (is_prime[i]) {
      printf("%d ", i);
    }
  }

  printf("\n");
  return 0;
}

