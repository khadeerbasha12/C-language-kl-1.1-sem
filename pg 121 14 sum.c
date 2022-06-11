#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x[50];
	char *p;
	printf("enter 50 characters");
	scanf("%s",x);
	*p=x;
	while(*p!=NULL)
	{
	printf("%c",*p);
	p++;
    }
	return 0;
}
