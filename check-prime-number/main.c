#include <math.h>
#include <stdio.h>

// Prime Number:
// A number is said to be a prime number if it is only divisible by 1 and itself.
// Example: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29

int main() {

    int number, i, limit, divisorCount = 0;

    // ask the user for a number
    printf("Enter a positive number: ");
    scanf("%d", &number);

    // we only need to check for divisors up to the square root of the number
    limit = ceil(sqrt(number));

    // loop through the numbers from 2 to the square root of the number
    for (i = 2; i <= limit; i++) {

        // check if the number is divisible by i
        if (number % i == 0) {
            divisorCount++;
        }
    }

    // check if the number is prime
    if ((divisorCount == 0 && number != 1) || number == 2 || number == 3) {
        printf("%d is a prime number.", number);
    } else {
        printf("%d is NOT a prime number.", number);
    }

    return 0;
}