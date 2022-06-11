#include<stdio.h>
void getday(int x)
{
	switch (x)
	{
		case 1:
			printf("sunday");
			break;
		case 2:
		    printf("monday");
		    break;
		case 3:
		printf("tuesday");
		break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("saturday");
			break;
		default:
			printf("invalid input");
		break;
	}
}
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	getday(x);
	return 0;
}
