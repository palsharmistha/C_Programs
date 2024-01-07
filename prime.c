#include<stdio.h>
int main()
{
	int num,i,counter=0;
	printf("Enter a number \n");//1to 10 tables in one program
	scanf("%d",&num);
	//for loop- row
	for(i=2;i<=num/2;i++)
	{
		if (num%i==0);
		{
			counter++;
			break;
		}
	}
		if(counter==0 && num!=1)
		printf("%d number is a Prime number\n",num);
		else
		printf("%d number is not a Prime number\n",num);
	
}
