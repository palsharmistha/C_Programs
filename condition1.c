#include<stdio.h>
void main()
{
	int number;
	printf("enter a number \n",number);
	scanf("%d",&number);
	
	if (number>0)
	{
		printf("%d is positive number",number);
	}
	if (number<0)
	{
		printf("%d is negative number",number);
	}
	if (number==0)
	{
		printf("%d is zero",number);
	}
	
}
