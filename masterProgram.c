//functions
//NO RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
void si();
void EvenOdd();
void table();
void marks();
//fun defination
void si()
{
	float p,r,si=0.0;
	printf("Enter principal and rate of interest:\n");
	scanf("%f%f",&p,&r);
	si=p*(1+r);
	printf("Simple Interest is %.2f\n",si);
	
}
void EvenOdd()
{
	int number;
	printf("enter a number \n",number);
	scanf("%d",&number);
	
	if (number%2==0){
		printf("%d is even",number);
	}
	if (number%2!=0){
		printf("%d is odd",number);
	}
	
}
void table()
{
	int i,num;
	printf("Enter number \n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	
}

void marks()
{
	float m1,m2,m3,m4, per=0.0, total=0.0;
	printf("Enter four subjects marks out of 100 each\n",m1,m2,m3,m4);
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	total= m1+m2+m3+m4;
	//per= ((400/total)*100);
	//printf("Percentage is %.2f",per);
	printf("Average is %.2f",total);
	if(total>=300)
	{
		printf("Grade A");
	}
	else if (total>=200)
	{
		printf("Grade B");
	}
	else if (total>=50)
	{
		printf("Grade C");
	}
	else 
	{
		printf("Grade D");
	}
}
void main()
{
	int choice;
	printf("Hello\n");
	printf("1. Simple Interest \n 2. Odd/Even \n 3.Table\n 4.Grade\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	//fun calling
	switch(choice)
	{
		case 1:
			printf("Simple Interest Function is called\n");
	    	si();
			break;
		case 2:
			printf("Odd/Even Function is called\n");
			EvenOdd();
			break;
		case 3:
			printf("Table Function is called\n");
			table();
			break;
		case 4:
			printf("Grade Function is called\n");
			marks();
			break;
		default:
			printf("Invalid");
			break;
			
	}
	
}

