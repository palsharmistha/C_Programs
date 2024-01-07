//pointer
#include<stdio.h>
main()
{
	float r,*pr,area=0.0;//pointer declaration
	printf("Enter radius :\n");
	scanf("%f",&r);
	pr=&r;//initialization
	area=3.14**pr**pr;
	printf("Area is %.2f \n",area);
}
