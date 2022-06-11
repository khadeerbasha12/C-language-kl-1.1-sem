#include<stdio.h>
#include<string.h>
void count(char name[])
{
	static int i=0,uc=0,lc=0;
	if(name[i]=='\0'){
	printf("no.of upper case letters=%d",uc);
	printf("no.of lower case letters=%d",lc);
	}
	else
	{
		if(name[i]>='A'&&name[i]<='z')
		uc++;
		else
		lc++;
		i++;
		count(name);
	}
	
}
int main()
{
	char name[100];
	int n,i;
	printf("enter the no.of characters");
	scanf("%d",&n);
	printf("enter the string");
	for(i=0;i<n;i++)
	scanf(" %c",&name[i]);
	count(name);
	return 0;
}
