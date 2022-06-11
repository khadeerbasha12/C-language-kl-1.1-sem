#include<stdio.h>
#include<math.h>
void distance(int degree,float height)
{
float distance;
float rad;
rad = degree*3.141/180;
distance = height/tan(rad);
printf("the distance is=%f",distance);
}
int main()
{
int degrees;
float ans,height;
printf("Enter degrees:");
scanf("%d",&degrees);
printf("Enter height:");
scanf("%f",&height);
distance(degrees,height); 
return 0;
}


