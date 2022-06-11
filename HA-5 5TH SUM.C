#include<stdio.h>
void count(char str[])
{
	static int i=0;
	static int cc=0;
	static int wc=1;
	static int lc=1;
	if(str[i]=='\0')
	{
		printf("\n number of characters:%d",cc);
		printf("\n number of words :%d",wc);
		printf("\n number of lines:%d",lc);
	}
	else
	{
		if(str[i]==' ')
		wc++;
		if(str[i]=='\n')
		lc++;
		cc++;
		i++;
		count(str);
	}
}
int main()
{
	char str[200];
	printf("enter the text");
	scanf("%[^~]s",str);
	count(str);
	return 0;
}
