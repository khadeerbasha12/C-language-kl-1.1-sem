#include<stdio.h>
int score(int a[5])
{
int m,b=0,s=100;
if(a[0]>b)
b=a[0];
if(a[1]>b)
b=a[1];
if(a[2]>b)
b=a[2];
if(a[3]>b)
b=a[3];
if(a[4]>b)
b=a[4];
if(a[0]<s)
s=a[0];
if(a[1]<s)
s=a[1];
if(a[2]<s)
s=a[2];
if(a[3]<s)
s=a[3];
if(a[4]<s)
s=a[4];
m=b-s;
return m;
}
int main()
{
int res;
int a[5]={1,2,3,4,5};
res=score(a);
printf("\n difference is %d",res);
return 0;
}
