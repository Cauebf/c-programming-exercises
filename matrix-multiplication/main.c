#include <stdio.h>
#define MAX 50

/*
Matrix multiplication:
- A matrix A (m x n) can be multiplied by matrix B (n x p).
- The number of columns in A must equal the number of rows in B.
- The result matrix will have the size m x p.
- Each result element is calculated by multiplying a row of A
  by a column of B and adding the products.
*/

int main() {

    int matrixA[MAX][MAX], matrixB[MAX][MAX], result[MAX][MAX];
    int rowsA, colsA, rowsB, colsB;
    int sum = 0;

    // ask for the size of matrix A
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    // ask for the elements of matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {

        for (int j = 0; j < colsA; j++) {

            scanf("%d", &matrixA[i][j]);
        }
    }

    // ask for the size of matrix B
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    // check if matrix multiplication is possible
    if (colsA != rowsB) {

        printf("The number of columns in matrix A must be equal to the number "
               "of rows in matrix B");
        return 0; // stop the program if the sizes are not compatible
    }

    // ask for the elements of matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {

        for (int j = 0; j < colsB; j++) {

            scanf("%d", &matrixB[i][j]);
        }
    }

    printf("\n");

    // calculate the multiplication of matrix A and matrix B
    for (int i = 0; i < rowsA; i++) {

        // select each column of matrix B
        for (int j = 0; j < colsB; j++) {

            // multiply values from row A by column B
            for (int k = 0; k < colsA; k++) {

                // add each multiplication to the sum
                sum += matrixA[i][k] * matrixB[k][j];
            }

            result[i][j] = sum; // store the final sum in the result matrix
            sum = 0;            // reset the sum for the next multiplication
        }
    }

    // print the result matrix
    printf("The result of matrix multiplication is:\n");
    for (int i = 0; i < rowsA; i++) {

        for (int j = 0; j < colsB; j++) {

            printf("%d ", result[i][j]);
        }

        printf("\n");
    }

    return 0;
}
