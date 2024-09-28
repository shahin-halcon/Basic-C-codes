/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    int row, col, i, j;
    int arr[row][col]; // Declare a 2D array with row and col dimensions

    // Prompt user to enter the number of rows
    printf("Enter the rows: ");
    scanf("%d", &row);

    // Prompt user to enter the number of columns
    printf("Enter the column: ");
    scanf("%d", &col);

    // Loop to input elements of the 2D array
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter the array elements: ");
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the array elements
    printf("Array elements are:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}