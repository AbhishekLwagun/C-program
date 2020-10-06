// simple while loop.

#include<stdio.h>
#include<conio.h>

int main()
{

    /* 
        declare the variables before using them 
    */
    int i = 0;  // declaration and initialization at the same time

    printf("\nPrinting numbers using while loop from 0 to 9\n\n");

    /* 
        while i is less than 10 
    */
    while(i<10)
    {
        printf("%d\n",i);

        /* 
            Update i so the condition can be met eventually 
            to terminate the loop 
        */
        i++;    // same as i=i+1;
      }
    return 0;
    //enjoy coding
}
