#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter a number \n");
	scanf("%d",&num);
	//for loop- row
	for(i=2;i<=num;i++)
	{
		fact=fact*i;
	}
		printf("Factorial is %d\n",fact);
	
}
