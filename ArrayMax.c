//array max num using dynamic method
#include<stdio.h>
main()
{
	int arr[10],n,i,max=0;
	printf("Enter size of elements out of 10 \n");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter elements \n");
		scanf("%d",&arr[i]);
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Maximum number is %d",max);
}
