#include<stdio.h>
void getsum(char x[26])
{
	int i,n;
	int v=0,c=0;
	printf("enter how many letters you want to enter");
	scanf("%d",&n);
	printf("enter the letters");
	for(i=0;i<5;i++)
	{
		scanf(" %c",&x);
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		v++;
		else 
		c++;
	}
	printf("the no.of vowels and consonants are=%d,%d",v,c);
}
int main()
{
	char x[26];
	getsum(x);
	return 0;
	
}
