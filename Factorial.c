//factorial using recursion
#include<stdio.h>
int factorial(int);
int main()
{
 int fact,n;
 printf("enter the number");
 scanf("%d",&n);/*
Author: Shahin-Halcon
*/

#include<stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n)
{
    if(n == 0 || n == 1) // Base case: if n is 0 or 1, return 1
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Recursive call to calculate the factorial
    }
}

int main()
{
    int n; // Declare variable to store the number
    printf("Enter a number: "); // Prompt user to enter a number
    scanf("%d", &n); // Input the number

    if(n < 0) // Check if the number is negative
    {
        printf("Factorial of negative numbers is not possible.\n"); // Print an error message
    }
    else
    {
        printf("Factorial of %d is %d.\n", n, factorial(n)); // Print the factorial
    }

    return 0;
}
 if(n<0)
 {
     printf("invalid");
 }
 else
 {
     fact=factorial(n);
     printf("factorial of %d=%d",n,fact);
 }
return 0;
}
int factorial(int f)
{
    if(f==0)
    {
        return 1;
    }
    else
    {
        return(f*factorial(f-1));
    }
}
