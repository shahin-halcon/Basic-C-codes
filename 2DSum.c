/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int r, c, i, j;
int A[2][2], B[2][2], C[2][2]; // Declare 2D arrays A, B, and C with fixed dimensions 2x2

void read(); // Function declaration for reading input
void print(); // Function declaration for printing output
void add(); // Function declaration for adding matrices

int main()
{
    read(); // Call the read function to input matrices A and B
    print(); // Call the print function to print matrices A and B
    add(); // Call the add function to add matrices A and B
    return 0;
}

void read()
{
    printf("Enter the number of rows and column: ");
    scanf("%d %d", &r, &c); // Input the number of rows and columns (but this is not used, as the arrays have fixed dimensions)

    printf("Enter the value of matrix A: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]); // Input elements of matrix A
        }
    }

    printf("Enter the value of matrix B: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]); // Input elements of matrix B
        }
    }
}

void print()
{
    printf("Printing the value:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", A[i][j]); // Print elements of matrix A
        }
        printf("\n");
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", B[i][j]); // Print elements of matrix B
        }
        printf("\n");
    }
}

void add()
{
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Sum is:\n");
            C[i][j] = A[i][j] + B[i][j]; // Add corresponding elements of matrices A and B
            printf("%d", C[i][j]); // Print the sum
        }
        printf("\n");
    }
}