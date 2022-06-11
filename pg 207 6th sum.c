#include<stdio.h>
void getvowel(char x)
{
	if (x=='a')
	printf("vowel");
	else if (x=='e')
	printf("vowel");
	else if(x=='i')
	printf("vowel");
	else if(x=='o')
	printf("vowel");
	else if(x=='u')
	printf("vowel");
	else if(x=='A')
	printf("vowel");
	else if(x=='E')
	printf("vowel");
	else if(x=='I')
	printf("vowel");
	else if(x=='O')
	printf("vowel");
	else if(x=='U')
	printf("vowel");
	else 
	printf("consonant");
}
int main()
{
char x;
printf("enter the letter");
scanf(" %c",&x);
getvowel(x);
return 0;
}
