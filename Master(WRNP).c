//functions
//WITH RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
float si();
int EvenOdd();
int table();
float avg();
//fun defination
float si()
{
	float p,r,n;
	printf("Simple Interest Function is called\n");
	printf("Enter principal and rate of interest:\n");
	scanf("%f%f%f",&p,&r,&n);
	return (p*r*n)/100;
	
}
int EvenOdd()
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
int table()
{
	int i,num;
	printf("Enter number \n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	
}

float avg()
{
	float m1,m2,m3,m4;
	printf("Enter four subjects marks out of 100 each\n",m1,m2,m3,m4);
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	return (m1+m2+m3+m4)/4;
}


float main()
{
	int choice;
	float x,y,z,m;
	int number,i,num;
	printf("Hello\n");
	printf("1. Simple Interest \n 2. Odd/Even \n 3.Table\n 4.Grade\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	//fun calling
	switch(choice)
	{
		case 1:
	    	x=si();
	    	printf("Simple Interest is %.2f\n",x);
			break;
		case 2:
			y=EvenOdd();
			break;
		case 3:
			z=table();
			break;
		case 4:
			m=avg();
			printf("Average is %.2f\n",m);
			if(m>=100)
			{
				printf("Grade A");
			}
			else if (m>=90)
			{
				printf("Grade B");
			}
			else if (m>=60)
			{
				printf("Grade C");
			}
			else 
			{
				printf("Grade D");
			}
		break;
		default:
			printf("Invalid");
			break;
			
	}
	
}


