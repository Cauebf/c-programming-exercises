#include <stdio.h>

int main() {

    int n, i, j;

    // ask the user for the number of rows
    printf("How many rows do you want in your pyramid?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // loop through each row

        // each row has (2 * n - 1) columns
        for (j = 1; j <= (2 * n - 1); j++) {
            // loop through each column of the current row

            // find where the stars should start and end
            int left = n - (i - 1);
            int right = n + (i - 1);

            // check if the current column is within the range
            if (j >= left && j <= right) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // move to the next line after completing a row
        printf("\n");
    }

    return 0;
}