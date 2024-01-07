//array declaration and printing using dynamic method
#include<stdio.h>
main()
{
	int arr[3],i,sum=0;
	//accepting values for array
	for(i=0;i<3;i++)
	{
		printf("Enter Elements \n");
		scanf("%d",&arr[i]);
	}
	printf("sum is :\n");
	//print or display elements
	for (i=0;i<3;i++)
	{
		sum=sum+arr[i];
	
	}
	printf("%d",sum);
}

