#include<stdio.h>
void main()
{
	int age;
	printf("enter the age \n",age);
	scanf("%d",&age);
	
	if (age<18){
		printf("Not eligible to vote",age);
	}
	if (age>=18){
		printf("Eligible to vote",age);
	}
}
