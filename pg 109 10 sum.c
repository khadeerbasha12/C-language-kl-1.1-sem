#include<stdio.h>
void getbill(p,c,pc,cc,amt)
{
	int bill=p*pc+c*cc;
	int change=amt-bill;
	printf("the bill amount=%d",bill);
	printf("the change given by shopkeeper=%d",change);
	
}
int main()
{
	int p,c,cc,amt;
	float pc;
	printf("enter the no.of pens and chocolates");
	scanf("%d %d",&p,&c);
	printf("enter the cost of both pen and chocolate");
	scanf("%f %d",&pc,&cc);
	printf("enter the amount taken to shop");
	scanf("%d",&amt);
	getbill(p,c,pc,cc,amt);
	return 0;
}
