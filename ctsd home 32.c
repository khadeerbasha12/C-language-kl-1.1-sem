#include<stdio.h>
void getsum(int x,int y)
{
	int f=0;
	int i,j;
	int sum;
	int nod=0
	for(i=2;i<=y;i++)
	{
		f=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			nod++;
		}
		if(nod==0){
		++;}
	}
		sum=sum*2;
		sum=y-sum;
	printf("%d",sum);
}
int main()
{
	int x,y;
	printf("enter the no.of bogies");
	scanf("%d",&x);
	printf("enter the no.of stations");
	scanf("%d",&y);
	getsum(x,y);
	return 0;
}
