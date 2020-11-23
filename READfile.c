#include <stdio.h>
#include <conio.h>
//Study with - Abhishek
// fgetc(); fputc();
int main(){
FILE *fp;
char ch;

fp = fopen("himal.txt","r");

if(fp == NULL){
	printf("No File Found.");
}

while(ch != EOF){
ch = fgetc(fp);
printf("%c",ch);
}

// Coding is fun.
