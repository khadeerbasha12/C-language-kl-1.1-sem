#include<stdio.h>
#include<string.h>
int main()
{
	char x[100],y[100];
	printf("enter the array");
	scanf("%s",x);
	y=strdup(x);
	printf("reverse=%s",y);
	if(strcmp(y,x)==0)
	printf("\npalindrome");
	else
	printf("\nnot palindrome");
	
}
