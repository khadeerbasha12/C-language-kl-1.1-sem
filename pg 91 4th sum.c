#include<stdio.h>
int getclass(int max,int con,int att)
{
	int nocr=max*70/100;
	int res=nocr-att;
	return res;
}
int main()
{
	int max,con,att;
	int ans;
	printf("\n enter the values of max,con,att");
	scanf("%d %d %d",&max,&con,&att);
	ans=getclass(max,con,att);
	printf(" the max clsses to be attended=%d",ans);
	return 0;
}
