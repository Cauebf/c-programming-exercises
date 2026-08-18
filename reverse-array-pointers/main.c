#include <stdio.h>
#define SIZE 5

int main() {

    int a[SIZE], *p;

    // ask the user for the numbers
    printf("Enter %d numbers: ", SIZE);
    for (p = a; p < a + SIZE; p++)
        scanf("%d", p);

    // print the array in original order
    printf("\nElements in original order: ");
    for (p = a; p < a + SIZE; p++)
        printf("%d ", *p);

    // print the array in reverse order
    printf("\nElements in reverse order: ");
    for (p = &a[SIZE - 1]; p >= a; p--)
        printf("%d ", *p);

    return 0;
}
