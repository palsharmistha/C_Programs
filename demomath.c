#include<stdio.h>
void main()
{
	int num1=10, num2=2, sum=0, sub=0, mult=0, div=0, mod=0;
	sum= num1+num2;
	printf("Addition is %d \n",sum);
	sub= num1-num2;
	printf("Subtraction is %d \n",sub);
	mult= num1*num2;
	printf("Multiplication is %d \n",mult);
	div= num1/num2;
	printf("Division is %d \n",div);
	mod= num1%num2;
	printf("Module is %d\n",mod);
}
