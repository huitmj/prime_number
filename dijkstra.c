#include <stdio.h>
#include <math.h>

int main() {
  // Maximum number to check
  int n = 100;

  // Array to store the smallest multiple of each prime found
  int Q[n + 1];

  // Initialize smallest multiples
  for (int i = 2; i <= n; i++) {
    Q[i] = i;
  }

  // Loop through potential primes
  for (int p = 2; p <= sqrt(n); p++) {
    // If p is prime (not marked composite yet)
    if (Q[p] == p) {
      // Update multiples of p in Q
      int q = p * p;
      while (q <= n) {
        Q[q] = p; // Mark q as composite with factor p
        q += p;
      }
    }
  }

  // Print primes
  printf("Prime numbers under %d:\n", n);
  for (int i = 2; i <= n; i++) {
    if (Q[i] == i) { // Check if number is still equal to its index (prime)
      printf("%d ", i);
    }
  }

  printf("\n");
  return 0;
}

