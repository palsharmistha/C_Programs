#include<stdio.h>
main()
{
	int a,b,temp,*pa,*pb;
	printf("Enter Numbers :\n");
	scanf("%d%d",&a,&b);
	printf("Value of a and b before swapping is %d and %d\n",a,b);
	pa=&a;
	pb=&b;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
	printf("Value of a and b after swapping is %d and %d\n",*pa,*pb);
}
