//functions
//WITH RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
float aoc();
float aor();
//fun defination
float aoc()
{
	float r;
	printf("Enter radius:\n");
	scanf("%f",&r);
	return 3.14*r*r;
	
}
float aor()
{
	float h,b;
	printf("Enter height and base:\n");
	scanf("%f%f",&h,&b);
	return 0.5*b*h;
	
}
float main()
{
	float x,y;
	//fun calling
	x=aoc();
	printf("Area of Circle is %.2f\n",x);
	y=aor();
	printf("Area of Rectangle is %.2f\n",y);
}
