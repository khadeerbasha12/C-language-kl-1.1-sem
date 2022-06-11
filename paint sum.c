#include<stdio.h>
float getcost(float l,float b,float h)
{
	float area,cost;
	area=2*((l*b)+(b*h)+(h*l));
	cost=area*0.05;
	return cost;
}
int main()
{
	float l,b,h,cost;
	printf("\n enter length,breadth,height of cuboid");
	scanf("%f %f %f",&l,&b,&h);
	cost=getcost(l,b,h);
	printf("\n cost to paint:%f",cost);
	return 0;
}
