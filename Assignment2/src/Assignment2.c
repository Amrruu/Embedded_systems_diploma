/*
 ============================================================================
 Name        : Assignment2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int main(){
	printf("\r\n ####################EX1################## \r\n");
	float a[2][2];
	float b[2][2];
	printf("Enter the elements of 1st matrix \r\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2 ;j++){
			printf("Enter a%d%d : ",i,j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[i][j]);
			printf("\r\n");

		}
	}
	printf("Enter the elements of 2nd matrix \r\n");
	for ( int i=0;i<2;i++){
		for(int j=0;j<2 ;j++){
			printf("Enter b%d%d : ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[i][j]);
			printf("\r\n");

		}
	}
	float sum;
	printf("Sum of matrix : \r\n");
	for ( int i=0;i<2;i++){
		for(int j=0;j<2 ;j++){
			sum = a[i][j]+b[i][j];
			printf("%f ",sum);
		}
		printf("\r\n");fflush(stdin);fflush(stdout);
	}

	//####################EX2##################
	printf("\r\n ####################EX2################## \r\n");
	int n,i;
	float sum2=0;
	float average;
	printf("Enter the number of elements : \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	float averageArr[n];
	for (i=0;i<n;i++){
		printf("%d. Enter number : ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&averageArr[i]);
		printf("\r\n");
		sum2=sum2+averageArr[i];
	}
	average=sum2/n;
	printf("the average = %0.1f",average);
	//####################EX3##################
	printf("\r\n ####################EX3################## \r\n");
	int rows;
	int cols;
	printf("Enter rows and columns of matrix : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&rows);
	scanf("%d",&cols);
	float matrix[rows][cols];
	float matrixTranspose[cols][rows];
	printf("Enter elements of the matrix : \r\n");
	for(int i = 0; i < rows;i++){
		for(int j= 0 ; j<cols;j++){
			printf("Enter elements a%d%d : \r\n",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix[i][j]);
		}
	}
	for(int i = 0; i <rows;i++){
		for(int j= 0 ; j<cols;j++){
			matrixTranspose[j][i]=matrix[i][j];
		}
	}
	printf(" Transpose of matrix : \r\n");
	for(int i = 0; i <cols;i++){
		for(int j= 0 ; j<rows;j++){
			printf("%0.1f ",matrixTranspose[i][j]);
		}
		printf("\r\n");
	}
	//####################EX4##################
	printf("\r\n ####################EX4################## \r\n");
	int noOfElements;
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&noOfElements);
	int arr4[noOfElements];

	for(int i = 0 ; i<noOfElements;i++){
		scanf("%d",&arr4[i]);
	}

	int NumberToBeInserted;
	printf("Enter Number to be inserted: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&NumberToBeInserted);

	int NumberLocation;
	printf("Enter the location: ");
	fflush(stdin);
	fflush(stdout);
	int j=0;
	scanf("%d",&NumberLocation);
	int arr4New[noOfElements+1];
	for (int i = 0 ; i<noOfElements+1;i++){
		if(i==NumberLocation){
			arr4New[NumberLocation]=NumberToBeInserted;
			continue;
		}
		arr4New[i]=arr4[j];
		j++;
	}
	for(int i = 0 ; i<=j;i++){
		printf("%d \r\n",arr4New[i]);
	}


	//####################EX5##################
	printf("\r\n ####################EX5################## \r\n");
	int noOfElements5;
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&noOfElements5);

	int arr5[noOfElements5];

	for(int i = 0 ; i<noOfElements5;i++){
		scanf("%d",&arr5[i]);
	}

	int NumberToBeSearched;
	printf("Enter Number to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&NumberToBeSearched);

	for(int i = 0 ; i<noOfElements5;i++){
		if(arr5[i]==NumberToBeSearched){
			printf("%d",i+1);
		}
	}
	//####################EX6##################
	printf("\r\n ####################EX6################## \r\n");
	char scentence[20];
	char charToSearch;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(scentence);
	printf("Enter the character to be searched : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&charToSearch);
	printf("\r\n");
	int j6=0;
	for ( int i = 0 ; i < strlen(scentence);i++){
		if(scentence[i]==charToSearch){
			j6++;
		}
	}
	if(j6>0){j6+=1;}
	printf("frequency of %c is = %d",charToSearch,j6);
	//####################EX7##################
	printf("\r\n ####################EX7################## \r\n");
	char Length_word[20];
	int j7=0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%s",Length_word);
	printf("\r\n");
	for(int i = 0 ; i <20;i++){
		if(Length_word[i]=='\0'){
			break;
		}
		else {
			j7++;
		}
	}
	printf("Length of string : %d \r\n",j7);
	//####################EX8##################
	printf("\r\n ####################EX8################## \r\n");
	char originString[15];


	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(originString);
	printf("\r\n");
	int j8=strlen(originString)-1;
	char reversedString[j8];
	for(int i = 0 ; i < strlen(originString);i++){
		reversedString[j8]=originString[i];
		j8--;
	}
	printf("%s",reversedString);

	return 0;
}
