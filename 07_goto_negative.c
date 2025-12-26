/*
Write a program that takes a number as input.
- If the number is negative, jump to a label that prints "Invalid input" and skip the rest of the code.
- Otherwise, print "You entered a positive number".
*/

#include <stdio.h>

int main()
{
    int number;
    printf("enter a number:\n");
    scanf("%d", &number);
    if (number < 0)
    {
        goto negative;
    }
    printf("you have entered a positive number or zero\n");
    return 0;
negative:
    printf("Invalid input\n");
    return 0;
}