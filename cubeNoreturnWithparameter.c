//functions
//NO RETURN WITH PARAMETER
#include<stdio.h>

//fun declaration
void cube(int);

void main()
{
	int num;
	printf("Enter Number \n");
	scanf("%d",&num);
	//fun calling
	cube(num);
	printf("Enter Number \n");
	scanf("%d",&num);
	cube(num);
	printf("Enter Number \n");
	scanf("%d",&num);
	cube(num);
}
//fun defination
void cube(int num)
{
	int cube=0;
	cube=num*num*num;
	printf("Cube is %d\n",cube);
	
}

