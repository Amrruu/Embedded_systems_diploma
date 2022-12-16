#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(){
int noOfElements;
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&noOfElements);
	float arr4[noOfElements];

	for(int i = 0 ; i<noOfElements;i++){
		scanf("%f",&arr4[i]);
	}

	float NumberToBeInserted;
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&NumberToBeInserted);

	int NumberLocation;
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&NumberLocation);
	float arr4New[noOfElements+1];
	for (int i = 0 ; i<noOfElements+1;i++){
		if(noOfElements==NumberLocation){
			arr4New[NumberLocation]=NumberToBeInserted;
			continue;
		}
		arr4New[i]=arr4[i];
	}
	return 0;
}
