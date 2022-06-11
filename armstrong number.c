#include<stdio.h>
#include<math.h>
void getsum(int n)
{
	int sum=0;
	int a=n;
	int x;
	int y=log10(n)+1;
	while(n>0){
	x=n%10;
	sum=sum+pow(x,y);
	n=n/10;
	}
	if(sum==a)
	printf("armstrong number");
	else
	printf("not armstrong number");
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	getsum(n);
	return 0;
}
