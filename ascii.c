#include<stdio.h>
void getcapital(char x)
{
	char c;
	c=x-32;
	printf("%d",c);
	
}
int main()
{
	char x;
	printf("enter a letter");
	scanf(" %c",x);
	getcapital(x);
	return 0;
}
