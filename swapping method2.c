
 
//Below is a program to swap two numbers without using any temporary variable.

#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10, y = 15;
    x = x + y - (y = x);
    printf("x = %d and y = %d",x,y);
    getch();
}
