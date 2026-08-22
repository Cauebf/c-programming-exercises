#include <stdio.h>
#define OPS 4

float sum(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {

    // creates an array of function pointers
    float (*ptr2func[OPS])(float, float) = {
        sum, sub, mul, div // the name of the function is the address of the function
    }; 
    
    int choice;
    float num1, num2;

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

    // call the function using the function pointer
    printf("Result: %.2f\n", ptr2func[--choice](num1, num2));

    return 0;
}
