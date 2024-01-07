#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter Numbers :\n");
	scanf("%d%d",&a,&b);
	printf("Value of a and b before swapping is %d and %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Value of a and b after swapping is %d and %d",a,b);
}

