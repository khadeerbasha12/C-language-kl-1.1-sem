#include<stdio.h>
float getradius(float s)
{
	float r=s/2;
	float res=r*3.28;
	return res;
}
int main()
{
	float s,ans;
	printf("\n enter the value of s");
	scanf("%f",&s);
	ans=getradius(s);
	printf("\n the max. radius dining table that will fit=%f",ans);
	return 0;
}
