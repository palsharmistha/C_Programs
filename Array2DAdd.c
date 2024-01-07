//2D Array
#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter elements in array A\n");
	//row
	for(i=0;i<2;i++)
	{//column
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements in array B\n");
	//row
	for(i=0;i<2;i++)
	{//column
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Elements in matrixs are:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
