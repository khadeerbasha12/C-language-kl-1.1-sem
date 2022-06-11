#include<stdio.h>
void getsum(int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("1.00,0.09,0.08,0.07,----0.00,-0.01,-0.02,-0.03,--,-1.00,-0.09,0.08,0.07,0.06---1.00\n");
	}
	
}
int main()
{int x;
printf("enter the number");
scanf("%d",&x);
getsum(x);
return 0;
}
