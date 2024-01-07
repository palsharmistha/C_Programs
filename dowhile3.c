#include<stdio.h>
void main()
{
	char c;
	int choice,option;
	do{
		printf("\n 1.Print Hello\n 2.Print Welcome\n 3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Hello\n");
				break;
			case 2:
				printf("Welcome\n");
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Please enter valid option\n");
		}
		printf("Do you want to try more?Enter y for yes \n");
		scanf("%d",&option);
		scanf("%c",&c);
	}
	while (c=='y');
	}
