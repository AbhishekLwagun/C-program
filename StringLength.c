#include <stdio.h>
#include <string.h>
// Study with - Abhishek
int main(){
char fullName[50];
int totalLength;

printf("Enter your full name:\n");
gets(fullName);

// finding length
totalLength = strlen(fullName);
printf("The length of %s is %d",fullName, totalLength);
return 0;
// Coding is Fun.
}
