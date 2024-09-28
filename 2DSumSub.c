/*
Author: Shahin-Halcon
*/

#include<stdio.h>

void arr1(); // Function declaration for inputting matrix A
void arr2(); // Function declaration for inputting matrix B
void add(); // Function declaration for adding matrices
void minus(); // Function declaration for subtracting matrices

int row, col, i, j;
int a[2][2], b[2][2], sum[2][2], sub[2][2]; // Declare 2D arrays a, b, sum, and sub with fixed dimensions 2x2

int main()
{
    printf("Enter the rows: ");
    scanf("%d", &row); // Input the number of rows
    printf("Enter the column: ");
    scanf("%d", &col); // Input the number of columns

    arr1(); // Call the arr1 function to input matrix A
    arr2(); // Call the arr2 function to input matrix B
    add(); // Call the add function to add matrices A and B
    minus(); // Call the minus function to subtract matrices A and B
    return 0;
}

void arr1()
{
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter the array elements of A: ");
            scanf("%d", &a[i][j]); // Input elements of matrix A
        }
    }

    printf("Array elements of A are:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]); // Print elements of matrix A
        }
        printf("\n");
    }
}

void arr2()
{
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter the array elements of B: ");
            scanf("%d", &b[i][j]); // Input elements of matrix B
        }
    }

    printf("Array elements of B are:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", b[i][j]); // Print elements of matrix B
        }
        printf("\n");
    }
}

void add()
{
    printf("Printing the sum:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j]; // Add corresponding elements of matrices A and B
            printf("%d\t", sum[i][j]); // Print the sum
        }
        printf("\n");
    }
}

void minus()
{
    printf("Printing the subtraction:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(a[i][j] > b[i][j])
            {
                sub[i][j] = a[i][j] - b[i][j]; // Subtract corresponding elements of matrices A and B
                printf("%d\t", sub[i][j]); // Print the subtraction
            }
            else
            {
                sub[i][j] = b[i][j] - a[i][j]; // Subtract corresponding elements of matrices A and B
                printf("%d\t", sub[i][j]); // Print the subtraction
            }
        }
        printf("\n");
    }
}