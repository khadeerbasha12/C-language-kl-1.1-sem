#include<stdio.h>
void getsum(int x)
{
	if(x>2000&&x<3000)
	printf("car A");
	else if(x>100&&x<500)
	printf("car B");
	else 
	printf("invalid input");
}
int main()
{
	int x,
    
	scanf("%d",&x);
	getsum(x);
	return 0;
}
