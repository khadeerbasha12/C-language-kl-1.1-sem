#include<stdio.h>
#include<string.h>
int uppercase(char s[],int i)
{
	static   int c=0;
	if(s[i]>='A'&&s[i]<='Z'){
	c++;
	printf("%c",s[i]);}
	if(i>=0)
	uppercase(s,i-1);
	return c;
}
int main()
{
	char s[50];
	printf("enter the string");
	scanf("%[^\n]s",s);
	int a=uppercase(s,strlen(s)-1);
	printf("%d",a);
	return 0;
}
