#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int sum=0;
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("the sum is=%d",sum);
	return 0;
}
