//string compare
#include<stdio.h>
main()
{
	char str1[10],str2[10];
	printf("Enter String1: \n");
	gets(str1);
	printf("Enter String2: \n");
	gets(str2);
	if (strcmp(str1,str2)==0)
	{
		printf("Both strings are Equal \n");
	
	}
	else
	{
		printf("Both strings NOT are Equal \n");
	}
	
}
