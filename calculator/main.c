#include <stdio.h>

float sum(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {

    int choice;
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operation you want to perform:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = sum(num1, num2);
            break;
        case 2:
            result = sub(num1, num2);
            break;
        case 3:
            result = mul(num1, num2);
            break;
        case 4:
            result = div(num1, num2);
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
