//String
//calculate the lenght of string
//printf--->puts
//scanf--->gets
#include<stdio.h>
void main()
{
	int len=0;
	char str[10];
	printf("Enter string \n");
	gets(str);
	puts(str);
	len=strlen(str);//inbuild func
	printf("Lenght of String is : %d\n",len);
	while(str[len]!='\0')
	{
		len++;
		}	
		printf("Lenght of String is : %d\n",len);
	
}
