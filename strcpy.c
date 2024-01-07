//string copying
#include<stdio.h>
main()
{
	char str1[10],str2[10];
	printf("Enter String1: \n");
	gets(str1);
	printf("Enter String2: \n");
	gets(str2);
	printf("Before copying \n");
	puts(str1);
	puts(str2);
	printf("After copying \n");
	strcpy(str1,str2);//str1 gets changed
	//strcat(str2,str1); str2 gets changed
	puts(str1);
	puts(str2);
	
}
