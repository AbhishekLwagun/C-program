#include<stdio.h>
#include<conio.h>

void greatNum();       // we should declare function first after header syntax

int main()
{
    greatNum();        // function call //this is the place or we should call fuction inside int main or main function and return 0;
    return 0;
}

void greatNum()        // function definition
{      					//this is the code which shows what is the main purpose of fuction or for which task fuction should perform
    int i, j;
    printf("Enter 2 numbers that you want to compare...");
    scanf("%d%d", &i, &j);
    if(i > j) {
        printf("The greater number is: %d", i);
    }
    else {
        printf("The greater number is: %d", j);
    }
}
