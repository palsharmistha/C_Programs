//functions
//WITH RETURN WITH PARAMETER
#include<stdio.h>

//fun declaration
float si(float,float,float);
int EvenOdd(int);
int table(int);
float avg(float,float,float,float);

float main()
{
	int choice;
	float x,y,z,m,p,r,n,m1,m2,m3,m4,m5;
	int number,i,num;
	printf("Hello\n");
	printf("1. Simple Interest \n 2. Odd/Even \n 3.Table\n 4.Grade\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	//fun calling
	switch(choice)
	{
		case 1:
			printf("Enter principal, rate of interest and nnumber of yrs:\n",p,r,n);
			scanf("%f%f%f",&p,&r,&n);
	    	x=si(p,r,n);
	    	printf("Simple Interest is %.2f\n",x);
			break;
		case 2:
			printf("enter a number \n",number);
			scanf("%d",&number);
			y=EvenOdd(number);
			break;
		case 3:
			printf("Enter number \n");
			scanf("%d",&num);
			z=table(num);
			break;
		case 4:
			printf("Enter four subjects marks out of 100 each\n",m1,m2,m3,m4);
	        scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
			m=avg(m1,m2,m3,m4);
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
//fun defination
float si(float p,float r,float n)
{
	return (p*r*n)/100;
	
}
int EvenOdd(int number)
{

	if (number%2==0){
		printf("%d is even",number);
	}
	if (number%2!=0){
		printf("%d is odd",number);
	}
	
}
int table(int num)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	
}

float avg(float m1,float m2, float m3,float m4)
{
	return (m1+m2+m3+m4)/4;
}




