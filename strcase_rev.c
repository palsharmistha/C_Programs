//string contatination
#include<stdio.h>
main()
{
	char str1[10],str2[10];
	printf("Enter String1: \n");
	gets(str1);
	printf("Enter String2: \n");
	gets(str2);
	printf("String in uppercase is %s \n",strupr(str1));
	printf("String in lowercase is %s \n",strlwr(str2));
	printf("String in reverse is %s \n",strrev(str1));
}
