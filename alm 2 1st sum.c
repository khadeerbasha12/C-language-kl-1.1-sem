#include<stdio.h>
void getsum(float x,float y)
{
	float res;
	res=x*x/2*y;
	printf("the minimum runaway length=%f",res);
	
}
int main()
{
	float x,y;
	printf("enter the speed in meters");
	scanf("%f",&x);
	printf("enter the acceleration in m/sec");
	scanf("%f",&y);
	getsum(x,y);
	return 0;
}
