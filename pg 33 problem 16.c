#include<stdio.h>
#include<string.h>
void print(char s[40])
{
	char s1[50];
	printf("enter the character");
	scanf("%s",s);
	strcpy(s1,s);
	printf("the reverse is=%s\n",strrev(s));
	if(strcmp(s1,s)==0)
	printf("yes\n");
	else
	printf("no\n");
}
int main()
{
	char s[40];
	print(s);
	return 0;
}
