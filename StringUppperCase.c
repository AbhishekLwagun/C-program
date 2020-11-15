#include <stdio.h>
#include <string.h>
// study with - Abhishek
int main(){

char firstName[25];


printf("Enter first name:\n");
gets(firstName);

printf("Upper First name is %s",strupr(firstName));
// Coding is Fun.
return 0;
}
