#include<stdio.h>
int totalresistance(int r[10])
{
	int tr=r[0]+r[1]+r[2]+r[3]+r[4]+r[5]+r[6]+r[7]+r[8]+r[9];
	return tr;
}
int main()
{
	int r[10]={10,12,13,22,34,44,45,5,55,7};
	int a;
	a=totalresistance(r);
	printf("\n the total resistance is %d",a);
	return 0;
}
