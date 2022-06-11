#include<stdio.h>
void getsum(int x)
{
	switch(x)
	{
		case 1:
			printf("you have selected:\n");
			printf("DEPARTMENT OF INFORMATICS\n");
			printf("FROM SCHOOL OF COMPUTER COMPUTER SCIENCE\n");
			break;
		case 2:
				printf("you have selected:\n");
		    printf(" DEPARTMENT OF MACHINE LEARNING\n");
			printf("FROM SCHOOL OF COMPUTER SCIENCE\n");
			break;
		case 3:
				printf("you have selected:\n");
				printf("DEPARTMENT OF COMMERCE\n");
				printf("FROM SCHOOL OF BUSINESS\n");
				break;
		case 4:
				printf("you have selected:\n");
				printf("DEPARTMENT OF PURCHASING\n");
				printf("FROM SCHOOL OF BUSINESS\n");
				break;
	}

}
int main()
{
	int x;
	printf("ENTER YOU CHOICE OF DEPARTMENT\n");
	printf("1.DEPARTMENT OF INFORMATICS\n");
	printf("2.DEPARTMENT OF MACHINE LEARINING\n");
	printf("3.DEPARTMENT OF COMMERCE\n");
	printf("4.DEPARTMENT OF PURCHASING\n");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
