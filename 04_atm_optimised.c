/*
Problem:
Write a program that simulates a simple ATM. The user should be able to:
- Deposit money
- Withdraw money (only if balance is sufficient)
- Check balance
- Exit
*/

#include <stdio.h>

int main()
{
    int balance = 1000, choice;
    int deposit, withdraw;
    choice = 1;

    while (1)
    {
        printf("--------ATM MACHINE--------\n");
        printf("Enter what you want to do :\n1.Deposit money\n2.Withdraw money\n3.check balance\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter the amount you want to deposit\n");
            scanf("%d", &deposit);
            balance = balance + deposit;
            printf("your current balance is %d\n", balance);

            break;
        case 2:
            printf("enter the amount you want to withdraw\n");
            scanf("%d", &withdraw);
            if (balance >= withdraw)
            {
                balance = balance - withdraw;
                printf("your current balance is %d\n", balance);
            }
            else
            {
                printf("not enough balance\n");
            }
            break;
        case 3:
            printf("your current balance is %d\n", balance);
            break;

        case 4:
            printf(".....exiting.....");
            return 0;
        default:
            printf("Invalid choice -- Choose again");
        }
    }

    return 0;
}