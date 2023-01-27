/*
 ============================================================================
 Name        : a.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi 3.14

struct sStudent {
	char name[50];
	int rollNumber;
	float marks;
};
struct sDistance {
	float feet;
	float inches;
};
struct sComplexNumber {
	float real ;
	float imaginary;
};

struct sStudent addStudent(struct sStudent student1);
void printStudent(struct sStudent student1);
struct sDistance addDist(struct sDistance dist);
void printSum(struct sDistance dist1,struct sDistance dist2);
struct sComplexNumber addCmplx(struct sComplexNumber cmplxNmbr);
void printSumcmplx(struct sComplexNumber cmplxNmbr1,struct sComplexNumber cmplxNmbr2);
void addStudents(struct sStudent students[]);
void printStudents(struct sStudent students[]);
int main(){
	struct sStudent student1;
	student1=addStudent(student1);
	printStudent(student1);

	printf("\r\n#####################EX2###################\r\n");
	struct sDistance dist1,dist2;
	printf("Enter the 1st distance");
	dist1=addDist(dist1);
	printf("Enter the 2 distance");
	dist2=addDist(dist2);
	printSum(dist1,dist2);

	printf("\r\n#####################EX3###################\r\n");
	struct sComplexNumber cmplxNmbr1,cmplxNmbr2;
	printf("Enter the 1st complex number");
	cmplxNmbr1 = addCmplx(cmplxNmbr1);
	printf("Enter the 2nd complex number");
	cmplxNmbr2 = addCmplx(cmplxNmbr2);
	printSumcmplx(cmplxNmbr1,cmplxNmbr2);

	printf("\r\n#####################EX4###################\r\n");
	struct sStudent students[10];
	printf("Enter information of students\r\n");
	addStudents(students);
	printStudents(students);
	return 0;
	printf("\r\n#####################EX5###################\r\n");
	float rad;
	printf("Enter the radius \r\n");
	fflush(stdin); fflush(stdout);
	scanf("%f",&rad);
	printf("the area is = %f", pi * rad * rad);

	printf("\r\n#####################EX6###################\r\n");
	printf("size of union is 32");
	printf("\r\n size of structure 40 \r\n");
}

struct sStudent addStudent(struct sStudent student1){
	puts("Enter the name : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",student1.name);
	puts("Enter the roll number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&student1.rollNumber);
	puts("Enter the marks : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&student1.marks);
	return student1;
}
void printStudent(struct sStudent student1){
	printf("name : %s \r\n",student1.name );
	printf("roll name : %d \r\n",student1.rollNumber );
	printf("marks : %f \r\n",student1.marks );
}
struct sDistance addDist(struct sDistance dist){
	puts("Enter the feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dist.feet);
	puts("Enter the inches : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dist.inches);
	return dist;
}
void printSum(struct sDistance dist1,struct sDistance dist2){
	float feet=dist1.feet+dist2.feet;
	float inches=dist1.inches+dist2.inches;
	if(inches>12){
		feet+=1;
		inches-=12;
	}
	printf("sum of distances %0.1f\'-%0.1f\"",feet,inches);
}
struct sComplexNumber addCmplx(struct sComplexNumber cmplxNmbr){
	printf("Enter Real and Imaginary numbers respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&cmplxNmbr.real);
	scanf("%f",&cmplxNmbr.imaginary);
	return cmplxNmbr;
}
void printSumcmplx(struct sComplexNumber cmplxNmbr1,struct sComplexNumber cmplxNmbr2){
	printf("Sum is %0.1f + %0.1f i",cmplxNmbr1.real+cmplxNmbr2.real,cmplxNmbr1.imaginary+cmplxNmbr2.imaginary);
}
void addStudents(struct sStudent students[]){
	for(int i = 0 ; i<10 ; i ++ ){
		puts("Enter the name : ");
		fflush(stdin); fflush(stdout);
		scanf("%s",students[i].name);
		puts("Enter the roll number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&students[i].rollNumber);
		puts("Enter the marks : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&students[i].marks);	}
}
void printStudents(struct sStudent students[]){
	for(int i = 0 ; i < 10 ; i++){
		printf("Information for roll number : %d \r\n",students[i].rollNumber);
		printf("name : %s \r\n",students[i].name);
		printf("marks : %f \r\n",students[i].marks);
	}
}
