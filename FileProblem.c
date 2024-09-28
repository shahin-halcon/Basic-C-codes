/*
Author: Shahin-Halcon
*/

#include<stdio.h>

// Function to calculate the sum of all elements in an array
int sum(int arr[], int n)
{
    int sum = 0; // Initialize sum to 0
    int i; // Declare variable for loop counter

    // Calculate the sum of all elements in the array
    for(i = 0; i < n; i++)
    {
        sum += arr[i]; // Add each element to the sum
    }

    return sum; // Return the sum
}

// Function to calculate the average of all elements in an array
float average(int arr[], int n)
{
    int sum = sum(arr, n); // Calculate the sum of all elements
    return (float)sum / n; // Return the average
}

// Function to find the maximum element in an array
int max(int arr[], int n)
{
    int max = arr[0]; // Initialize max to the first element
    int i; // Declare variable for loop counter

    // Find the maximum element in the array
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max) // Check if the current element is greater than max
        {
            max = arr[i]; // Update max
        }
    }

    return max; // Return the maximum element
}

// Function to find the minimum element in an array
int min(int arr[], int n)
{
    int min = arr[0]; // Initialize min to the first element
    int i; // Declare variable for loop counter

    // Find the minimum element in the array
    for(i = 1; i < n; i++)
    {
        if(arr[i] < min) // Check if the current element is less than min
        {
            min = arr[i]; // Update min
        }
    }

    return min; // Return the minimum element
}

int main()
{
    int n; // Declare variable to store the number of elements
    printf("Enter the number of elements: "); // Prompt user to enter the number of elements
    scanf("%d", &n); // Input the number of elements

    int arr[n]; // Declare array to store the elements
    printf("Enter the elements: "); // Prompt user to enter the elements
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Input each element
    }

    // Print the sum, average, maximum, and minimum of the elements
    printf("Sum: %d\n", sum(arr, n));
    printf("Average: %.2f\n", average(arr, n));
    printf("Maximum: %d\n", max(arr, n));
    printf("Minimum: %d\n", min(arr, n));

    return 0;
}