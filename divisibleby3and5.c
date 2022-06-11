#include<stdio.h>
int main()
{
	int a;
	printf("\n enter the value of a");
	scanf("%d",&a); 
    (a%3==0)&&(a%5==0)?printf("\n the number is divisible both 3 and 5"):printf("\n the number is not divisible by both 3 and 5 ");
	return 0;       
}
