#include<stdio.h>
#include<math.h>
#define pi 3.14
float converter(int x)
{
	float rad=x*pi/180;
	float res=tan(rad);
	return res;
}
int main()
{
	int deg;
	float ans;
	printf("enter the degrees");
	scanf("%d",&deg);
	ans=converter(deg);
	printf("the result of tan%d :%f",deg,ans);
	return 0;
} 

