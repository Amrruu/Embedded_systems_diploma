/*
 ============================================================================
 Name        : Assignment3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void primef(int num1,int num2);
int factorial(int num3);
void strReverse(char originString[],int i ,int j);
int powerNumber(int baseN,int powerN);
int main(void) {
	printf("\r\n #####################EX1##################### \r\n");
	int num1,num2;
	printf("Enter two numbers (Intervals) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	scanf("%d",&num2);
	primef(num1,num2);
	printf("\r\n #####################EX2##################### \r\n");
	int num3;
	printf("Enter a positive integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num3);
	printf("Factorial of %d is : %d",num3,factorial(num3));
	printf("\r\n #####################EX3##################### \r\n");
	char originString[15];
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(originString);
	printf("\r\n");
	int j=strlen(originString)-1;
	int i = 0;
	strReverse(originString,i,j);
	printf("\r\n #####################EX4##################### \r\n");
	int baseNumber,powNumber;
	printf("Enter base number : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&baseNumber);
	printf("Enter power number (positive integer) : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&powNumber);
	printf("%d",powerNumber(baseNumber,powNumber));
	return EXIT_SUCCESS;
}



void primef(int num1,int num2){
	printf("Prime numbers between %d and %d : ",num1,num2);
	for(int i=num1;i<num2;i++){
		int flag=1;
		for(int j=2 ;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if (flag==1){
			printf("%d ",i);
		}
	}
}
int factorial(int num3){
	if(num3==2)return 2;
	else {
		return num3*factorial(num3-1);
	}
}
void strReverse(char originString[],int i ,int j){
	if ( i == strlen(originString)){
		return;
	}
	else {
		printf("%c",originString[j]);
		i++;
		j--;
		strReverse(originString,i,j);
	}
}
int powerNumber(int baseN,int powerN){
	if(powerN==1)return baseN;
	else {
		return baseN*powerNumber(baseN,powerN-1);

	}
}
