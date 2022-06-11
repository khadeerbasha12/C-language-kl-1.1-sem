#include<stdio.h>
int assprof(int i1,int i2,int i3,int i4)
{
int prof=1;
int asscprof=2;
int ass=prof+asscprof;
int tass1=i1-ass;
int tass2=i2-ass;
int tass3=i3-ass;
int tass4=i4-ass;
int tass=tass1+tass2+tass3+tass4;
return tass;
}
int main(){
int i1,i2,i3,i4,ans;
printf("\n Enter first staff member:");
scanf("%d",&i1);
printf("Enter second staff member:");
scanf("%d",&i2);
printf("\n Enter third staff member:");
scanf("%d",&i3);
printf("\n Enter fourth staff member:");
scanf("%d",&i4);
ans=assprof(i1,i2,i3,i4);
printf("\n Assistant Professors:%d",ans);
return 0;
}
