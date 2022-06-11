#include<stdio.h>
float score(float m1,float m2,float m3,float m4,float m5)
{
	float ans=(m1+m2+m3+m4+m5)/5;
	return ans;
}
int main()
{
	float m1,m2,m3,m4,m5,res;
	printf("\n Enter first subject marks:");
	scanf("%f",&m1);
	printf("\n Enter second subject marks:");
	scanf("%f",&m2);
	printf("\n Enter third subject marks:");
	scanf("%f",&m3);
	printf("\n Enter fourth subject marks:");
	scanf("%f",&m4);
	printf("\n Enter fifth subject marks:");
	scanf("%f",&m5);
	res=score(m1,m2,m3,m4,m5);
	printf("\n Total percentage is %f",res);
	return 0;
}
