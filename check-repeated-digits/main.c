#include <stdio.h>

int main() {

    int count[10] = {0}, number, digit;

    // ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // make the number positive
    if (number < 0) {
        number = -number;
    }

    // count how many times each digit appears
    while (number > 0) {
        digit = number % 10; // extract the last digit
        count[digit]++;      // increment the count of the digit
        number /= 10;        // remove the last digit from the number
    }

    // display repeated digits
    printf("Repeated digits: ");

    int found = 0;
    for (int i = 0; i < 10; i++) {

        // check if the digit has been seen more than once
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }

    return 0;
}
