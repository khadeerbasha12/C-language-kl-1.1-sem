#include<stdio.h>
int calcDays(int x,int m,int d)
{
int ans;
ans=m*x+d;
return ans;
}
int main()
{
int res,x,m,d;
printf("\n Enter x:");
scanf("%d",&x);
printf("\n Enter m:");
scanf("%d",&m);
printf("\n Enter d:");
scanf("%d",&d);
res=calcDays(x,m,d);
printf("\n The maximum days Mohit takes to complete the work=%d",res);
return 0;
}


