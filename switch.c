#include<stdio.h>
void main()
{
	int day;
	printf("Enter the day\n");
	scanf("%d",&day);
	switch (day)
	{
		case 1: 
			printf("Its Monday\n");
		break;
		case 2: 
			printf("Its Tuesday\n");
			break;
		case 3: 
			printf("Its Wednesday\n");
			break;
		case 4: 
			printf("Its Thursday\n");
			break;
		case 5: 
			printf("Its Friday\n");
			break;
		case 6: 
			printf("Its Saturday\n");
			break;
		case 7: 
			printf("Its Sunday\n");
			break;
		default :
			printf("Invalid");
			break;
	}
}
