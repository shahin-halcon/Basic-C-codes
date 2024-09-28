/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int main()
{
    int n, i, j, temp; // Declare variables n, i, j, and temp
    int arr[100]; // Declare an array arr of size 100

    printf("Enter the number of elements: "); // Prompt user to enter the number of elements
    scanf("%d", &n); // Input the number of elements

    printf("Enter the elements: "); // Prompt user to enter the elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Input the elements
    }

    printf("Before sorting:\n"); // Print the elements before sorting
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Print the elements
    }
    printf("\n");

    // Bubble sort algorithm
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j]; // Swap the elements
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("After sorting:\n"); // Print the elements after sorting
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Print the elements
    }
    printf("\n");

    return 0;
}