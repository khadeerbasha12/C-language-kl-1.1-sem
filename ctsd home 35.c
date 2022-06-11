#include<stdio.h>
void getsum(char x)
{
	switch(x)
	{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':		
	printf("vowel");
	break;
	default:
	printf("consonant");
	break;
	}
}
int main()
{
	char x;
	printf("enter the character");
	scanf(" %c",&x);
	getsum(x);
	return 0;
}
