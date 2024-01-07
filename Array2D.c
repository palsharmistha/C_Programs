//2D Array
#include<stdio.h>
main()
{
	int arr[2][2],i,j;
	printf("Enter elements\n");
	//row
	for(i=0;i<2;i++)
	{//column
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Elements in matrixs are:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
