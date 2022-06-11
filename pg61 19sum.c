#include<stdio.h>
float getvolume(int r,int h)
{
	float res=0.33*22/7*r*r*h;
	return res;
}
int main()
{
int r,h;
float ans;
printf("\n Enter the radius:");
scanf("%d",&r);
printf("\n Enter the height:");
scanf("%d",&h);
ans=getvolume(r,h);
printf("\n result:%f",ans);
return 0; 
}
