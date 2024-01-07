//functions
//NO RETURN WITH PARAMETER
#include<stdio.h>

//fun declaration
void si(float,float,float);
void EvenOdd(int);
void table(int);
void avg(float,float,float,float);

void main()
{
	int choice;
	float p,r,n,m1,m2,m3,m4;
	int number,i,num;
	printf("Hello\n");
	printf("1. Simple Interest \n 2. Odd/Even \n 3.Table\n 4.Grade\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	//fun calling
	switch(choice)
	{
		case 1:
			printf("Simple Interest Function is called\n");
			printf("Enter principal and rate of interest:\n");
			scanf("%f%f%f",&p,&r,&n);
	    	si(p,r,n);
			break;
		case 2:
			printf("enter a number \n",number);
			scanf("%d",&number);
			printf("Odd/Even Function is called\n");
			EvenOdd(number);
			break;
		case 3:
			printf("Enter number \n");
	 		scanf("%d",&num);
			printf("Table Function is called\n");
			table(num);
			break;
		case 4:
			printf("Enter four subjects marks out of 100 each\n",m1,m2,m3,m4);
			scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
			printf("Grade Function is called\n");
			avg(m1,m2,m3,m4);
			break;
		default:
			printf("Invalid");
			break;
			
	}
	
}

//fun defination
void si(float p,float r,float n)
{
	float si=0.0;
	si=(p*r*n)/100;
	printf("Simple Interest is %.2f\n",si);
	
}
void EvenOdd(int number)
{
	
	if (number%2==0){
		printf("%d is even",number);
	}
	if (number%2!=0){
		printf("%d is odd",number);
	}
	
}
void table(int num)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	
}

void avg(float m1,float m2,float m3,float m4)
{
	float avg=0.0;
	avg= (m1+m2+m3+m4)/4;
	//per= ((400/total)*100);
	//printf("Percentage is %.2f",per);
	printf("Average is %.2f",avg);
	if(avg>=100)
	{
		printf("Grade A");
	}
	else if (avg>=90)
	{
		printf("Grade B");
	}
	else if (avg>=60)
	{
		printf("Grade C");
	}
	else 
	{
		printf("Grade D");
	}
}

