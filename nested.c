#include<stdio.h>
void main()
{
	int number;
	printf("enter a number \n",number);
	scanf("%d",&number);
	
	if (number>0)
	{
		printf("%d is positive\n",number);
		if (number%2==0)
		{
			printf("%d is even \n",number);
		}
		else
		{
			printf("%d is odd \n",number);
		}
	if (number<0)
	{
		printf("%d is negative\n",number);
		if (number%2==0)
		{
			printf("%d is even\n",number);
		}
		else
		{
			printf("%d is odd\n",number);
		}
	}
	else
	{
		printf("%d is zero\n",number);
	}
}
}
