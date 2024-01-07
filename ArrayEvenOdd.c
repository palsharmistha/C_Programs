//array even and odd using dynamic method
#include<stdio.h>
main()
{
	int arr[5],i;
	//accepting values for array
	for(i=0;i<5;i++)
	{
		printf("Enter Elements \n");
		scanf("%d",&arr[i]);
	}
	printf("Elements are :\n");
	//print or display elements
	for (i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d is even number \n",arr[i]);
		}
		else
		{
			printf("%d is odd \n",arr[i]);
		}
	}
}

