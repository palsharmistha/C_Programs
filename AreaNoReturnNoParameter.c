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
	printf("Hello\n");
	//fun calling
	printf("Area of Circle Function is called\n");
	aoc();
	printf("Area of Rectangle Function is called\n");
	aor();
}
