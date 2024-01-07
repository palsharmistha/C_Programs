//functions
//NO RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
void aoc();
void aor();
//fun defination
void aoc()
{
	float r,area=0.0;
	printf("Enter radius:\n");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("Area of Circle is %.2f\n",area);
	
}
void aor()
{
	float h,b,area=0.0;
	printf("Enter height and base:\n");
	scanf("%f%f",&h,&b);
	area=0.5*b*h;
	printf("Area of Rectangle is %.2f\n",area);
	
}
void main()
{
	int choice;
	printf("Hello\n");
	printf("1. Area of Circle \n 2. Area of Rectangle\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	//fun calling
	switch(choice)
	{
		case 1:
			printf("Area of Circle Function is called\n");
	    	aoc();
			break;
		case 2:
			printf("Area of Rectangle Function is called\n");
			aor();
			break;
		default:
			printf("Invalid");
			
	}
	
}
