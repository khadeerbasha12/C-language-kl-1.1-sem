#include<stdio.h>
void getword(char word[10])
{
	word[0]=word[0]+1;
	word[1]=word[1]+1;
	word[2]=word[2]+1;
	word[3]=word[3]+1;
	word[4]=word[4]+1;
	word[5]=word[5]+1;
	word[6]=word[6]+1;
	word[7]=word[7]+1;
	word[8]=word[8]+1;
	word[9]=word[9]+1;
	printf("\n the word is %s",word);
}
int main()
{
	char word[10];
	printf("\n enter the word");
	scanf("%s[^\n]",&word);
	getword(word);
	return 0;
}
