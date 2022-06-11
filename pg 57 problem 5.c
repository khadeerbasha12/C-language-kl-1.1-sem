#include<stdio.h>
void order(int x[30],int n)
{
	int i,j,a;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(x[j]>x[j+1])
			{
				a=x[j];
				x[j]=x[j+1];
				x[j+1]=a;
			
			}
		}
	}	
	printf("the ascending order is");
	for(i=0;i<n;i++)
	printf(" %d",x[i]);
}
int main()
{
	int x[30],n,i;
	printf("enter the no.of values you want to enter");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	order(x,n);
	return 0;
}
