#include<stdio.h>
void getsum(int x[10])
{
	int *p;
	int i;
	int sum=0;
		printf("enter the numbers");
		for(i=0;i<10;i++)
		{
		 scanf("%d",x[i]);
		}
		for(i=0;i<10;i++)
		{
			sum=sum+x[i];
		}
		 
		printf("%d",sum);
}
int main()
{
	int x[50];
 getsum(x);
 return 0;
	
}
