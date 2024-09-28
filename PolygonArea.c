/*
Author: Shahin-Halcon
*/

#include<stdio.h>

int sqr(); // Function declaration for square
int trngl(); // Function declaration for triangle
int rctngl(); // Function declaration for rectangle

int main()
{
    char polygn; // Variable to store the polygon type
    int p; // Variable to store the result

    // Prompt user to enter the polygon type
    printf("sqr=s\ntrngl=t\nrctngl=r\nenter the number according polygon need to find\n");
    scanf("%c",&polygn);

    // Switch case to select the polygon type
    switch(polygn)
    {
        case 's': 
            p = sqr(); // Call the square function
            printf("%d",p);
            break;
        case 't': 
            p = trngl(); // Call the triangle function
            printf("%d",p);
            break;
        case 'r': 
            p = rctngl(); // Call the rectangle function
            printf("%d",p);
            break;
        default: 
            printf("invalid"); // Invalid polygon type
            break;
        return 0;
    }
}

// Function to calculate the area of a square
int sqr()
{
    int a; // Variable to store the side length
    printf("enter the length"); // Prompt user to enter the side length
    scanf("%d",&a);
    return a*a; // Return the area of the square
}

// Function to calculate the area of a triangle
int trngl()
{
    int b, h; // Variables to store the base and height
    printf("enter the base and height"); // Prompt user to enter the base and height
    scanf("%d%d",&b,&h);
    return 0.5*b*h; // Return the area of the triangle
}

// Function to calculate the area of a rectangle
int rctngl()
{
    int a, b; // Variables to store the length and breadth
    printf("enter the length breadth"); // Prompt user to enter the length and breadth
    scanf("%d%d",&a,&b);
    return a*b; // Return the area of the rectangle
}