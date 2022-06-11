#include<stdio.h>
#include<math.h>
void getsin(float x)
{
	float res;
	if(x>0){
	res=sin(1/x);
	printf("the result is=%.4f",res);}
	else
	printf("try again");
}
int main()
{
	float x;
	printf("enter the value of x");
	scanf("%f",&x);
	getsin(x);
	return 0;
}
