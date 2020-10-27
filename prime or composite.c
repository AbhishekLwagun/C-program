/*  Prime Number: A number that is only divisible by 1 and itself.
Composite Number: A number that is not a prime number.
Note: 1 is neither prime nor composite.
Below is a program to find whether the user input number is a prime number or a composite number using recursion. */

#include<stdio.h>
#include<conio.h>

// declaring the recursive function
int isPrime(int, int);

int main()
{
    printf("\n\n\t\tStudy with - Abhishek\n\n\n");
    int num, prime;
    printf("Enter a positive number to check if Prime: ");
    scanf("%d", &num);
    prime = isPrime(num, num/2);
    if(prime == 1)
    {
        printf("\n\n%d is a prime number\n\n", num);
    }
    else
    {
        printf("\n\n%d is a Composite number\n\n", num);
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

// function definition
int isPrime(int n, int i)
{
    if(i == 1)
        return 1;   // return statement terminates the recursive funtion
    else
    {
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);    // recursive call not using return statement
    }
}

Output:
