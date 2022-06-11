#include<stdio.h>
void getsum(int x)
{
	if(x%3==0)
		{
		printf("\ndivisible by 3");
		if(x%5==0)
		 printf("\ndivisible by 5");
		else
		 printf("\nnot divisible by 5");}
	else{
	printf("\nnot divisible by 3");}
}
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
