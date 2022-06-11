#include<stdio.h>
#include<math.h>
int getdistance(int x1,int x2,int y1,int y2,int d)
{
	float res=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+d;
	return res;
}
int main()
{
	int x1,x2,y1,y2,d;
	float a;
	printf("\n enter the values of x1,x2,y1,y2,dis");
	scanf("%d %d %d %d %d",&x1,&x2,&y1,&y2,&d);
	a=getdistance(x1,x2,y1,y2,d);
	printf("\n the length of the path from a to c via b is:%f",a);
	return 0;
}
