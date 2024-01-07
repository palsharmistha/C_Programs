#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("This is Table of %d\n",i);
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
	printf("\n");
	}
}
