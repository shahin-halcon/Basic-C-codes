//author: shahin-halcon
// This program collects and displays student information

// Include the standard input/output library
#include<stdio.h>

// Define the main function
void main()
{
    // Declare variables to store student information
    int roll_no;  // Roll number of the student
    char name[20];  // Name of the student (max 19 characters)
    char dept[10];  // Department of the student (max 9 characters)

    // Prompt the user to enter their roll number
    printf("enter your roll no.");
    // Read the roll number from the user
    scanf("%d",&roll_no);

    // Prompt the user to enter their name
    printf("enter your name");
    // Read the name from the user
    scanf("%s",&name);

    // Prompt the user to enter their department
    printf("enter your department");
    // Read the department from the user
    scanf("%s",&dept);

    // Display the collected student information
    printf("\n\n name=%s \n roll no.=%d \n department=%s \n thank you \n\n\n",name,roll_no,dept);

    // Return 0 to indicate successful execution
    return 0;
}