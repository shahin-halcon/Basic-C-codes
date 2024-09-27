// This program calculates the average of 6 percentages given a total mark
// Author: shahin-halcon

// Include the standard input/output library
#include<stdio.h>

// Function to calculate the average
void avg(int a, int b, int c, int d, int e, int f, int t)
{
    int p, s;
    // Calculate the sum of the percentages multiplied by 100
    p = (a + b + c + d + e + f) * 100;
    // Calculate the average
    s = p / t;
    // Print the average
    printf("\nthe average is %d", s);
}

void main()
{
    int a, b, c, d, e, f, t, result;
    // Prompt the user to enter the total mark
    printf("total mark");
    scanf("%d", &t);
    // Prompt the user to enter 6 percentages
    printf("\n enter 6 percentage to see the average percentage");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    // Call the avg function to calculate the average
    avg(a, b, c, d, e, f, t);
}