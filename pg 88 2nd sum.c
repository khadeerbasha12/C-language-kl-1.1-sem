#include<stdio.h>
float gettotal(float bill,float tip,float tax)
{
	float res=bill+tip/100+tax/100;
	return res;
}
int main()
{
	float bill,tip,tax;
	float ans;
	printf("\n enter the bill,tip,tax");
	scanf("%f %f %f",&bill,&tip,&tax);
	ans=gettotal(bill,tip,tax);
	printf(" the total amount to be paid=%f",ans);
	return 0;
}
