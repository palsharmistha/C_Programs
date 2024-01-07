//pointer
#include<stdio.h>
main()
{
	int a,b,*pa,*pb,sum,mul,div,sub;//pointer declaration
	printf("Enter Numbers :\n");
	scanf("%d%d",&a,&b);
	pa=&a;//initialization
	pb=&b;
	sum=*pa+*pb;
	sub=*pa-*pb;
	mul=*pa * *pb;
	div=*pa / *pb;
	printf("Sum is %d \n",sum);
	printf("Subtraction is %d \n",sub);
	printf("Multiplication is %d \n",mul);
	printf("Division is %d \n",div);
}
