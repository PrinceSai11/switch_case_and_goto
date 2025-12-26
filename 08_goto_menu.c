/*
Write a program that shows a menu:
- Print "Hello"
- Print "Bye"
- Exit
Use goto to jump back to the menu after each choice, until the user selects Exit.
*/

#include <stdio.h>

int main()
{
    int choice;
Menu:
    printf("-------MENU-------\n");
    printf("enter your choice \n1.Print Hello \n2.Print Bye \n3.Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Hello\n");
        goto Menu;
    case 2:
        printf("Bye\n");
        goto Menu;
    case 3:
        printf(".....exiting.....\n");
        return 0;
    default:
        printf("Invalid choice ---> choose again\n");
        goto Menu;
    }
    return 0;
}