//functions
//WITH RETURN WITH PARAMETER
#include<stdio.h>

//fun declaration
float aoc(float);
float aor(float, float);

float main()
{
	float r,b,h,x,y;
	int choice;
	printf("1. Area of Circle \n 2. Area of Rectangle\n");
	printf("Enter choice\n");
	scanf("%d",&choice);
	//fun calling
	switch(choice)
	{
		case 1:
			printf("Enter radius:\n");
			scanf("%f",&r);
	    	x=aoc(r);
	    	printf("Area of Circle is %.2f\n",x);
			break;
		case 2:
			printf("Enter height and base:\n");
			scanf("%f%f",&h,&b);
			y=aor(b,h);
			printf("Area of Rectangle is %.2f\n",y);
			break;
		default:
			printf("Invalid");
			
	}
	
}
//fun defination
float aoc(float r)
{
	return 3.14*r*r;
	
}
float aor(float b,float h)
{
	return 0.5*b*h;
	
}

