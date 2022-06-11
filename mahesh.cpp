#include<stdio.h>
void getsum(int x,float a,float m,float p,float t)
{
	float y,q,r,s;
	float res;
	y=a*50;
	q=m*35;
	r=p*10;
	s=t*15;
	res=x-(y+q+r+s);
	printf("the amount given by shopkeepr to sachin is=%f",res);
}
int main()
{
	int x;
	printf("enter the amuont taken by sachin");
	scanf("%d",&x);
	float a;
	printf("enter how many kg's of apple he purchased");
	scanf("%f",&a);
	float m;
	printf("enter how many kg of mango purchased");
	scanf("%f",&m);
	float p;
	printf("enter how many kg of potato purchased");
	scanf("%f",&p);
	float t;
	printf("enter how many kg of tomato purchased");
	scanf("%f",&t);
	getsum(x,a,m,p,t);
	return 0;
}
