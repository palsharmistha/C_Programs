//pointer
#include<stdio.h>
main()
{
	int n,*ptr;//pointer declaration
	printf("Enter Number :\n");
	scanf("%d",&n);
	ptr=&n;//initialization
	printf("Address of n in pointer is %d \n",ptr);
	printf("Value of n in pointer is %d \n",*ptr);
}
