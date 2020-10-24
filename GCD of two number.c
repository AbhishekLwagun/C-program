
//Greatest Common Divisor(GCD) of two numbers is a number that divides both of them.

//Below is a program to the GCD of the two user input numbers using recursion.

#include<stdio.h>
#include<conio.h>

// declaring the recursive function
int find_gcd(int , int );

int main()
{
    printf("\n\n\t\tStudy with- Abhishek\n\n\n");
    int a, b, gcd;
    printf("\n\nEnter two numbers to find GCD of \n");
    scanf("%d%d", &a, &b);
    gcd = find_gcd(a, b);
    printf("\n\nGCD of %d and %d is: %d\n\n", a, b, gcd);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

// defining the function
int find_gcd(int x, int y)
{
    if(x > y)
        find_gcd(x-y, y);

    else if(y > x)
        find_gcd(x, y-x);
    else
    return x;
}
