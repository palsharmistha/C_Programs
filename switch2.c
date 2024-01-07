#include<stdio.h>
void main()
{
	char ch;
	float height,base,area=0.0,radius,areaa=0.0;
	printf("A.Area of Triangle \n B.Area of circle\n\n");
	printf("Enter your choice \n");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'A':
		printf("Enter base and heaigh of triangle \n");
		scanf("%f%f",&base,&height);
		area=0.5*height*base;
		printf("Area of triangle is %.2f\n",area);
		break;
		case 'B':
		printf("Enter radius of circle \n");
		scanf("%f",&radius);
		areaa=3.14*radius*radius;
		printf("Area of circle is %.2f\n",area);
		break;
		default:
			printf("Invalid");
	}
}
