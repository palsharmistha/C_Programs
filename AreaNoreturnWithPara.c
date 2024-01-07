//functions
//NO RETURN NO PARAMETER
#include<stdio.h>

//fun declaration
void aoc(float);
void aor(float,float);

void main()
{
	float r,area=0.0,h,b,areaa=0.0;
	printf("Enter radius:\n");
	scanf("%f",&r);
	//fun calling
	aoc (r);
	printf("Enter height and base:\n");
	scanf("%f%f",&h,&b);
	aor(h,b);
}

//fun defination
void aoc(float r)
{
	float area=0.0;
	area=3.14*r*r;
	printf("Area of Circle is %.2f\n",area);
	
}
void aor(float h, float b)
{
	float area=0.0;
	area=0.5*b*h;
	printf("Area of Rectangle is %.2f\n",area);
	
}

