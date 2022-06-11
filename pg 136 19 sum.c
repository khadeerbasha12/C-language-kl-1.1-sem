#include<stdio.h>
int numofchoc(int n)
{
 int res;
 res=n*(n+1)/2;
 return res;
}
int main(){
int n,ans;
printf("\n Enter day:");
scanf("%d",&n);
ans=numofchoc(n);
printf("\n He recieves= %d choclates",ans);
return 0;
}
