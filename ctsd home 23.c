#include<stdio.h>
void getnum(float x[5])
{
	int i;
	float max=x[0];
	for(i=0;i<5;i++){
	printf("enter the values");
	scanf("%f",&x[i]);
	if(x[i]>max)
	max=x[i];}
	printf("%0.4f",max);

}
int main()
{
	float x[5];
	getnum(x);
	return 0;
	
}
