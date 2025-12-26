/*
- Menu-driven Calculator
- Input two numbers and perform addition, subtraction, multiplication, division using switch-case.
- Handle division by zero with an if inside the case.
*/

#include <stdio.h>

int main()
{
    int choice, a, b;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b:\n");
    scanf("%d", &b);
    printf("choose from following :- \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("sum is %d\n", a + b);
        break;
    case 2:
        printf("difference is%d\n", a - b);
        break;
    case 3:
        printf("product is %d\n", a * b);
        break;
    case 4:
        if (b == 0)
            printf("undefined");
        else
            printf("quotient is %d\n", a / b);
        break;
    default:
        printf("invalid choice");
    }
    return 0;
}