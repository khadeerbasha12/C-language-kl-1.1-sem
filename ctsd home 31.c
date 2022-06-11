#include<stdio.h>
void getsum(int x,int y)
{
	int i;
	int sum=0;
	for(i=x;i<=y;i++)
	{
		if(i%7==0&&i%63!=0){
		sum=sum+i;}
	}
	printf("%d",sum);
}
int main()
{
	int x,y;
	printf("enter the two numbers");
	scanf("%d %d",&x,&y);
	getsum(x,y);
	return 0;
}
