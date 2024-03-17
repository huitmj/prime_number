#include <stdio.h>
#include <math.h>

int main() {
   int i, j, isPrime;

   printf("Prime numbers under 100:\n");

   for (i = 2; i <= 100; i++) {
       // Assume the number is prime until proven otherwise
       isPrime = 1;

       // Optimized divisibility check: iterate up to the square root of i
       for (j = 2; j <= sqrt(i); j++) {
           if (i % j == 0) {
               isPrime = 0;
               break;  // No need to check further if a divisor is found
           }
       }

       if (isPrime) {
           printf("%d ", i);
       }
   }

   printf("\n");
   return 0;
}

