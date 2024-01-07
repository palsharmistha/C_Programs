//function using pointer
#include<stdio.h>
int add(int *,int *);
float aoc(float *);
float aor(float *,float *);
int main()
{
	int a,b;
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&a,&b);
	add(&a,&b);
	
	float r;
	printf("Enter radius to find area of circle:\n");
	scanf("%f",&r);
	aoc(&r);
	
	float l,bb;
	printf("Enter lenght and height to find area of rectangle:\n");
	scanf("%f%f",&l,&bb);
	aor(&l,&bb);
	
}
int add(int *p,int *q)
{
	int sum;
	sum=*p+*q;
	printf("Sum is %d\n",sum);

}
float aoc(float *r)
{
	float area=0.0;
	area=3.14**r**r;
	printf("Area of Circle is %.2f\n",area);
}
float aor(float *l,float *bb)
{
	float areaa=0.0;
	areaa=*l * *bb;
	printf("Area of rectangle is %.2f\n",areaa);
}

