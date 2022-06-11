#include<stdio.h>
#include<math.h>
float getfht(float x)
{
	float res=x*(1.8)+32;
	return res;
}
int main()
{
	float x;
	float ans;
	printf("\n enter the temp in degree celsius");
	scanf("%f",&x);
	ans=getfht(x);
	printf("\n the temp in farenheit is:%f",ans);
	return 0;
}
