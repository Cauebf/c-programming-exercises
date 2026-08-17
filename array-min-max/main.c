#include <stdio.h>

// call by reference (min and max are pointers)
void minMax(int arr[], int len, int *min, int *max) {

    // initialize min and max with the first element
    *min = *max = arr[0];

    // loop through the array
    for (int i = 1; i < len; i++) {

        // update min if the current element is smaller
        if (arr[i] < *min) {
            *min = arr[i];
        }

        // update max if the current element is greater
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {

    int arr[] = {6, 8, 5, 4, 5};
    int min, max;
    int len = sizeof(arr) / sizeof(arr[0]); // get the length of the array

    // call the minMax function
    minMax(arr, len, &min, &max);

    // print the minimum and maximum values
    printf("Minimum value: %d\nMaximum value: %d", min, max);

    return 0;
}
