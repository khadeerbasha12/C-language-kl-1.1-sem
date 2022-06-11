#include<stdio.h>
float getcost(float l,float b,float h,float area)
{
	area=2*(l*b+b*h+h*l);
	float cost=area*0.05;
	return cost;
}
int main()
{
	float l,b,h,area;
	float ans;
	printf("\n enter the values of l,b and h");
	scanf("%f %f %f",&l,&b,&h);
	ans=getcost(l,b,h,area);
	printf("\n the cost to paint is:%.2f",ans);
	return 0;
}
