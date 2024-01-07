//functions
//WITH RETURN WITH PARAMETER
#include<stdio.h>

//fun declaration
int add(int,int);

int main()
{
	int x,y,m,n,p,q,sum=0,summ=0,summm=0;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	//fun calling
	sum=add(x,y);
	printf("Sum is %d\n",sum);
	printf("Enter two numbers:\n");
	scanf("%d%d",&m,&n);
	summ=add(m,n);
	printf("Sum is %d\n",summ);
	printf("Enter two numbers:\n");
	scanf("%d%d",&p,&q);
	summm=add(p,q);
	printf("Sum is %d\n",summm);
}
//fun defination
int add(int a,int b)
{
	return a+b;	
}
