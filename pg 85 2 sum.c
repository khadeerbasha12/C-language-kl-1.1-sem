#include<stdio.h>
void printbill(float aq,float ap,float mq,float mp,float pq,float pp,float amt)
{
 float bill=aq*ap+mq*mp+pq*pp;
 float change=amt-bill;
 printf("\n--------------------------------------------------------------------------------------------------\n");
 printf("S.NO\tName of the item\tQuantity\tprice per kg\ttotal amount");
 printf("\n--------------------------------------------------------------------------------------------------\n");
printf("1\tapple\t\t\t%0.1f\t\t%0.2f\t\t%0.2f\n",aq,ap,aq*ap);
printf("\n---------------------------------------------------------------------------------------------------\n");
printf("2\tmango\t\t\t%0.1f\t\t%0.2f\t\t%0.2f",mq,mp,mq*mp);
printf("\n---------------------------------------------------------------------------------------------------\n");
printf("3\tpotato\t\t\t%0.1f\t\t%0.2f\t\t%0.2f",pq,pp,pq*pp);
printf("\n---------------------------------------------------------------------------------------------------\n");
printf("\n the change given to ram by shopkeeper is=%f",change);
printf("\n---------------------------------------------------------------------------------------------------\n");
printf("\n the total bill is=%f",bill);
printf("\n---------------------------------------------------------------------------------------------------\n");
}
int main()
{
	float aq=2.00,ap=50.00;
	float mq=1.50,mp=35.00;
	float pq=2.50,pp=10.00;
	float amt=500.0;
	printbill(aq,ap,mq,mp,pq,pp,amt);
	return 0;
}
