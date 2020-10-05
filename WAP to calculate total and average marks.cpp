#include<stdio.h>
#include<conio.h>
   main(){
int roll_no,m1,m2,m3,total;
float average;
printf("\nEnter the roll_no: ");
scanf("%d",&roll_no);
printf("\nEnter the marks1: ");
scanf("%d",&m1);
printf("\nEnter the marks2: ");
scanf("%d",&m2);
printf("\nEnter the marks3: ");
scanf("%d",&m3);
total=m1+m2+m3;
average=total/3.0;
printf("\n Student roll_no is: %d",roll_no);
printf("\n Marks1: %d",m1);
printf("\n Marks2: %d",m2);
printf("\n Marks3: %d",m3);
printf("\n Total: %d",total);
printf("\n Average: %f",average);

  }
   
