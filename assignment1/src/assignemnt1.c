/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	int number;
	printf("Enter the integer you want to check : \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if(number%2){
		printf("%d is odd \r\n",number);
	}
	else{
		printf("%d is even \r\n #############EX2#############",number);
	}
	//###########################EX2######################################
	char character;
	printf("\r\n Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character);
	switch (character) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	{
		printf("\r\n %c is vowel \r\n",character);
	}
	break;
	default:{
		printf("\r\n %c is consonant \r\n",character);
	}
	break;
	}
	puts("#############EX3#############");
	//###########################EX3######################################

	float number1,number2,number3;
	printf("\n\r Enter 3 numbers : \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&number1);
	scanf("%f",&number2);
	scanf("%f",&number3);
	if(number1>=number2){
		if (number1>=number3){
			printf("\r\n %f is the largest number ",number1);
		}
		else {printf("\r\n %f is the largest number ",number3);
		}

	}
	else if(number2>=number3)
	{
		printf("\r\n %f is the largest number",number2);
	}
	else {printf("\r\n %f is the largest number",number3);}
	puts("\r\n#############EX4#############");
	//###########################EX4######################################
	int number4;
	printf("\r\n Enter a number : \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number4);
	if(number4>0){
		printf("%d is positive",number4);
	}
	else if (number4==0){
		printf("%d is zero \r\n",number4);

	}
	else{printf("%d is negative \r\n",number4);
	}

	puts("\r\n#############EX5#############");
	//###########################EX5######################################
	char character5;
	printf("\r\n Enter a character : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&character5);
	if(character5<65){
		printf("\r\n %c is not an alphabet",character5);
	}
	else {
		printf("\r\n %c is an alphabet",character5);
	}
	puts("\r\n#############EX6#############");
	//###########################EX6######################################
	int sum=0,limit;
	printf("\r\n enter an integer :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&limit);
	for(int i=0;i<=limit;i++){
		sum=sum+i;
	}
	printf("sum = %d \r\n",sum);
	puts("\r\n#############EX7#############");
	//###########################EX7######################################
	int factorial=1,number7;
	printf("\r\n Enter an integer : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number7);
	if(number7<0){
		printf("\r\n Error!! factorial of a negative number doesn't exist");
	}
	else if (number7==0){
		printf("\r\n factorial of %d = %d",number7,factorial);
	}
	else {
		for(int i=1;i<=number7;i++){
			factorial =factorial*i;
		}
		printf("\r\n factorial of %d = %d",number7,factorial);		}



	puts("\r\n#############EX8#############");
	//###########################EX8######################################
	char operator;
	float operand1,operand2;
	printf("\r\n Enter the operator : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operator);
	printf("\r\n Enter the first operand : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&operand1);
	printf("\r\n Enter the second operand : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&operand2);
	switch (operator){
	case '+':{
		printf("\r\n sum of %f and %f = %f",operand1,operand2,operand1+operand2);
	}
	break;
	case '-':{
		printf("\r\n subtraction of %f and %f = %f",operand1,operand2,operand1-operand2);
	}
	break;
	case '*':{
			printf("\r\n multiplication of %f and %f = %f",operand1,operand2,operand1*operand2);
		}
		break;
	case '/':{
			printf("\r\n division of %f and %f = %f",operand1,operand2,operand1/operand2);
		}
		break;
	default:
		break;
	}
}
