#include<stdio.h>
int totalresistance(int r[5])
{
	int tr=r[0]+r[1]+r[2]+r[3]+r[4];
	return tr;
}
int main()
{
	int r[5];
	int a;
	printf("\n enter the resistances");
	scanf("%d %d %d %d %d",&r[0],&r[1],&r[2],&r[3],&r[4]);
	a=totalresistance(r);
	printf("\n the total resistance is %d",a);
	return 0;
}
