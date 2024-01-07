//functions
//NO RETURN WITH PARAMETER
#include<stdio.h>

//fun declaration
void add(int,int);

void main()
{
	int a,b;
	printf("Enter two Numbers \n");
	scanf("%d%d",&a,&b);
	//fun calling
	add(a,b);
	printf("Enter two Numbers \n");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("Enter two Numbers \n");
	scanf("%d%d",&a,&b);
	add(a,b);
}
//fun defination
void add(int x,int z)
{
	int sum=0;
	sum=x+z;
	printf("Sum is %d\n",sum);
	
}

