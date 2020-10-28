/*A Fibonacci series is defined as a series in which each number is the sum of the previous two numbers with 1, 1 being the first two elements of the series.

static keyword is used to initialize the variables only once.

Below is a program to print the fibonacci series using recursion.*/

#include<stdio.h>
#include<conio.h>
// declaring the function
void printFibo(int );

int main()
{
    printf("\n\n\t\tStudy with- Abhishek\n\n\n");
    int k, n;
    long int i = 0, j = 1;
    printf("Enter the length of the Fibonacci series: ");
    scanf("%d", &n);
    printf("\n\nfirst %d terms of Fibonacci series are:\n\n\n",n);
    printf("%d ", 1);
    printFibo(n);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

void printFibo(int aj)
{
    static long int first = 0, second = 1, sum;
    if(aj > 1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        printFibo(aj-1);    // recursive call
    }
    else
    {
        // after the elements, for line break
        printf("\n\n\n");
    }
}

Output:
