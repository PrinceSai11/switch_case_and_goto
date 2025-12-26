// Write a program that prints numbers from 1 to 10 using goto instead of a loop.

#include <stdio.h>

int main()
{
    int i = 1;
number:
    if (i < 11)
    {
        printf("%d ", i);
        i++;
        goto number;
    }

    return 0;
}