/* Write a program that takes a single character as input and uses switch-case to check whether it is a
vowel (a, e, i, o, u in both uppercase and lowercase) or a consonant. */

#include <stdio.h>

int main()
{
    char c;
    printf("enter a character:\n");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("vowel");
        break;
    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            printf("consonant");
        }
        else
        {
            printf("not an alphabet");
        }
    }
    return 0;
}