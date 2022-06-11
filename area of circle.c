#include<stdio.h>
#define pi 3.14
float getarea(float r)
{	
   float area=pi*r*r;
    return area;
}


int main()
{
	float x,a;
	printf("\n enter the radius of circle");
	scanf("%f",&x);
	a=getarea(x);
	printf("\n the area of circle is:%.10f",a);
	return 0;
}
