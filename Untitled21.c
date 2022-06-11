#include<stdio.h>
void sum(int x,int f0,int f1)
{
	int r;
	if(x==1)
	{
		 printf("%d\n",f0+f1);
	}
	else{
	int f2=f0+f1;
	printf("%d\n",f2);
	f0=f1;
	f1=f2;
	x--;
	sum(x,f0,f1);
	}  
}
int main()
{
	int m,s;
	printf("enter the numbers");
	scanf("%d",&m);
	sum(m,0,1);
	return 0;
}
