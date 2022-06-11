#include<stdio.h>
void getword(char word[10])
{
	word[0]=word[0]-32;
	word[1]=word[1]-32;
	word[2]=word[2]-32;
	word[3]=word[3]-32;
	word[4]=word[4]-32;
	word[5]=word[5]-32;
	word[6]=word[6]-32;
	word[7]=word[7]-32;
	word[8]=word[8]-32;
	word[9]=word[9]-32;
	printf("\n the capital word is %s",word);
}
int main()
{
	char word[10];
	printf("\n enter the word");
	scanf("%[^\n]s",&word);
	getword(word);
	return 0;
}
