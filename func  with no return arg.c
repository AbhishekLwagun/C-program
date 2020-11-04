// Below is the fucntion with no return value.
#include<stdio.h>
#include<conio.h>
 
 int rectarea();
 int main(){
 	int area;
 	area = rectarea();
 	printf("area of rec is %d",area);
 	getch();
 }
 
   int rectarea(){
   	int a,b,area;
   	printf("enter the length & breadth:");
   	scanf("%d%d",&a,&b);
   	area = a*b;
   	return area;
   }
