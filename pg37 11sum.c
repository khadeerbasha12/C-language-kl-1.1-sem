#include<stdio.h>
#include<math.h>
int calctime(int hr1,int min1,int hr2,int min2 )
{
int time,hour,minute;
hour=(hr2-hr1)*60;
minute=min2-min1;
time=hour+minute;
return time;
}
int main()
{
int ans,hr1,min1,hr2,min2;
printf("\n Enter the time: ");
scanf("%d %d",&hr1,&min1);
printf("\n Enter the time:");
scanf("%d %d",&hr2,&min2);
ans=calctime(hr1,min1,hr2,min2);
printf("\n The time to solve problem is:%d",ans);
return 0;
}
