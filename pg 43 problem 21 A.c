#include<stdio.h>
int getsum(char str[])
{
	static int c=0,i=0;
	if(str[i]=='\0')
	return c;
	else
	{
		
		if(str[i]>='A'&&str[i]<='z')
		{
			c++;
			printf("\n %c",str[i]);
		}
		i++;
		getsum(str);
	}
}
int main()
{
	char str[100];
	printf("enter the string");
	scanf("%[^\n]s",str);
	int a=getsum(str);
	printf("\n%d",a);
	return 0;
}
