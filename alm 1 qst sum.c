#include<stdio.h>
void getsum(float x)
{
	float res=x*2.54;
	printf("the height in cm is=%f",res);
	
}
int main()
{
	float x;
	printf("enter the height in inches");
	scanf("%f",&x);
	getsum(x);
	return 0;
}
