#include <stdio.h>

// Fibonacci Series:
// The Fibonacci series is a sequence of numbers in which each number is
// the sum of the two preceding numbers.
// Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...

int main() {

    int n, i;

    // ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // initialize the first two terms with 0 and 1
    int a = 0, b = 1, c;

    // print the Fibonacci series
    printf("The Fibonacci series is: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a); // print the current term
        c = a + b;        // calculate the next term
        a = b;            // update the first term with the second term
        b = c;            // update the second term with the next term
    }

    return 0;
}
