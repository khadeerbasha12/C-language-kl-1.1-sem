#include<stdio.h>
void getsum(int n)
{
	int i;
	int f=1;
	if(n<0)
	printf("invalid input");
	else
	{
		i=1;
		do{
			f=f*i;
			i++;
		}
		while(i<=n);
	 printf("%d",f);
	}	
}
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	getsum(x);
	return 0;
}
