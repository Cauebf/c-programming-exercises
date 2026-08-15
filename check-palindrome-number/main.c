#include <stdio.h>

// Palindrome Number: A number is said to be a palindrome number if the reverse of the number is the same as the number itself.

int main() {

    int number, reverse = 0, temp, digit;

    // ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // store the number in a temporary variable
    temp = number;

    // extract each digit from right to left and store it in reverse
    while (temp != 0) {

        // extract the last digit
        digit = temp % 10;

        // add the digit in reverse
        reverse = reverse * 10 + digit;

        // remove the last digit from temp
        temp /= 10;
    }

    // check if the number is a palindrome
    if (reverse == number) {
        printf("%d is a palindrome number.", number);
    } else {
        printf("%d is NOT a palindrome number.", number);
    }

    return 0;
}