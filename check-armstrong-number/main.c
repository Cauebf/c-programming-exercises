#include <stdio.h>

// Armstrong Number:
// A number is an Armstrong number if the sum of each digit
// raised to the number of digits is equal to the original number.
// Example: 153 (1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153)

int main() {

    int number, temp, digit;
    int power = 1, count, result = 0, digits = 0;

    // ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // store the number in a temporary variable
    temp = number;

    // count how many digits the number has
    while (temp != 0) {

        temp /= 10; // divide successively by 10 until the number becomes 0
        digits++;
    }

    count = digits; // store the number of digits
    temp = number;  // reset temp so we can go through the digits again

    // extract each digit and calculate digit^count and add it to the total
    while (temp != 0) {

        // extract the last digit
        digit = temp % 10;

        // calculate digit^count
        // e.g.: if digit = 5 and count = 3:
        // 5 * 5 * 5 = 125
        while (count != 0) {
            power *= digit;
            count--;
        }

        result += power; // add the result to the total
        count = digits;  // reset count for the next digit
        temp /= 10;      // remove the last digit
        power = 1;       // reset power for the next digit
    }

    // check if the number is an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.", number);
    } else {
        printf("%d is NOT an Armstrong number.", number);
    }

    return 0;
}