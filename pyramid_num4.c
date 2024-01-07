#include<stdio.h>
int main()
{
	int i,j;
	//for loop- i
	//range setting always starts from 1
	for(i=1;i<=5;i++)
	{
		//printing
		for (j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
