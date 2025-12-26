/*
Write a program that takes a number (1–7) as input and prints the corresponding day of the week
using switch-case. If the number is not between 1–7, print “Invalid day”.
*/

#include <stdio.h>

int main()
{
    int choice;
    printf("enter the number of the day(1-7):\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid day number");
    }
    return 0;
}