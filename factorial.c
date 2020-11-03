// below code print the factorial number using recursion

#include<stdio.h>
#inlcude<conio.h>
// declaring the function
int fact(int);

int main()
{
    printf("\n\n\t\tStudy with - Abhishek \n\n\n");
    int num, f;
    printf("\n\nEnter a number: ");
    scanf("%d", &num);
    f= fact(num);
    printf("\n\nFactorial of  %d is  %d\n\n", num, f);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

int fact(int aj)
{
    if(aj==1 || aj==0)
        return 1;
    else
        return (aj*fact(aj-1));
}

