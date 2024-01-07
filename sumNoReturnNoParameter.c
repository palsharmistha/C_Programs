//functions
//NO RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
void add();
//fun defination
void add()
{
	int a,b,sum=0;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum is %d\n",sum);
	
}
void main()
{
	printf("Hello\n");
	//fun calling
	add();
	add();
	add();
}
