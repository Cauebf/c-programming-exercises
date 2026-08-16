#include <stdio.h>
#define SIZE 5

// Reverse Array:
// Given an array of integers, reverse the order of the elements in the array.
// Example: [1, 2, 3, 4, 5] -> [5, 4, 3, 2, 1]

int main() {

    int arr[SIZE];

    // ask the user for the numbers
    for (int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // print the array in original order
    printf("Original array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // print the array in reverse order
    printf("Reversed array: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
