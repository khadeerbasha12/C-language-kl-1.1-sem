#include <stdio.h>
void getsum(char str[100])
{
	char *p;
	p=str;
	 int  vCount=0,cCount=0;
	 while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;
    }
     printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d",cCount);
}
int main()
{
    char str[100];
    char *p;
   
    printf("Enter any string: ");
    scanf("%s",str);
	getsum(str);
    return 0;
}
