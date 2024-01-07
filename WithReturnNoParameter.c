//functions
//WITH RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
int add();
//fun defination
int add()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	return a+b;
	
	
}
int main()
{
	int sum,x,y;
	//fun calling
	sum=add();
	printf("Sum is %d\n",sum);
	x=add();
	printf("Sum is %d\n",x);
	y=add();
	printf("Sum is %d\n",y);
}
