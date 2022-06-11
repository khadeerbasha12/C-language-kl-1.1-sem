#include<stdio.h>
void getvowel(char x)
{
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	printf(" it is a vowel");
	else
	printf("it is a consonant");
}
int main()
{
	char x;
	printf("enter the letter");
	scanf(" %c",&x);
	getvowel(x);
	return 0;
}
