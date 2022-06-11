#include<stdio.h>
#define pi 3.14
int main()
{
	float r;
	float *p=&r;
	float area;
	printf("\n enter the value of r");
	scanf("%f",&r);
	area=pi*(*p)*(*p);
	printf("\n the area is:%f",area);
	return 0;
}
