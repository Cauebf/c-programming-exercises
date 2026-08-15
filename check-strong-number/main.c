#include <stdio.h>

// Strong Number:
// A number is said to be a strong number if the sum of the factorial
// of its digits is equal to the number itself.
// Example: 145 (1! + 4! + 5! = 1 + 24 + 120 = 145)

int main() {

    int number, temp, digit, fact = 1, result = 0;

    // ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // store the number in a temporary variable
    temp = number;

    // calculate the sum of the factorial of each digit
    while (temp != 0) {

        // extract the last digit
        digit = temp % 10;

        // calculate the factorial of the digit
        // e.g.: if digit = 5: 5! = 1 * 2 * 3 * 4 * 5 = 120
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        result += fact; // add the result to the total
        temp /= 10;     // remove the last digit
        fact = 1;       // reset the factorial for the next digit
    }

    // check if the number is a Strong number
    if (result == number) {
        printf("%d is a Strong number.", number);
    } else {
        printf("%d is NOT a Strong number.", number);
    }

    return 0;
}