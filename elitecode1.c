#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	printf("%d ",a[i]);
	return 0;
}
