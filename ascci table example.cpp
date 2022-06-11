#include<stdio.h>
void getnum(char x)
{
	printf("%d",x);
}
int main()
{
	char x;
	printf("enter the letter");
	scanf(" %c",&x);
	getnum(x);
	return 0;
}
