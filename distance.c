#include<stdio.h>
float getmiddistance(float distance)
{
float miles=distance/2;
float res=miles*1.6;
return res;
}
int main()
{
float x;
float a;
printf("\n Enter the distance");
scanf("%f",&x);
a=getmiddistance (x);
printf("\n the distance to be travelled to meet at midpoint is:%.4f",a);
return 0;
}


