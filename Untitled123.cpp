#include<stdio.h> 
void getsum(int n,int token[])
{
	int d=0,a=0;
for(int i=0;i<n;i++)
{
if(token[i]%2==0)
d++;
else
a++;
}
printf("\n number of patients meets Dr.Diawakar=%d",d);
printf("\n number of patients meets dr.amrutha=%d",a);
}

int main()
{
int n;
printf("\n enter no of patients arrived");
scanf("%d",&n);
int token[n];
for(int i=0;i<n;i++)
{
printf("\n enter token number of patient[%d]=",i);
scanf("%d",&token[i]);
}
getsum(n,token);
return 0;
}
