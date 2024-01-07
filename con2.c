#include<stdio.h>
void main()
{
	int number;
	printf("Enter a number \n",number);
	scanf("%d",&number);
	
	if (number%3==0 && number%7==0)
	{
		printf("%d is divisible by 3 and 7 both",number);
	}
	else if (number%3!=0 && number%7==0)
	{
		printf("%d is divisible by 7 but not 3",number);
	}
	else if (number%3==0 && number%7!=0)
	{
		printf("%d is divisible by 3 but not 7",number);
	}
	else
	{
		printf("%d is not divisible by 3 and 7 both",number);
	}
	
}
