#include <stdio.h>

int main() {

    int arr[] = {6, 8, 5, 4, 5};
    int sum = 0, *p, len = sizeof(arr) / sizeof(arr[0]);

    // loop through the array
    for (p = &arr[0]; p < &arr[len]; p++) {
        // add each element to the sum
        sum += *p;
    }

    printf("Sum is: %d", sum);

    return 0;
}
