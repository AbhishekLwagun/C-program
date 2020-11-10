//Program to check if input character is a vowel using Switch Case.

#include<stdio.h>
#include<conio.h>

int main()
{
// Study with - Abhishek
    char ch;
    printf("Input a Character :  ");
    scanf("%c", &ch);

    switch(ch)
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
            printf("\n\n%c is a vowel.\n\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n\n", ch);
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
