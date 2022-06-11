#include<stdio.h>
void print(int a)
{
	int x[100];
	int i,sum=0;
	printf("enter the resistance");
	for(i=0;i<a;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("the resistances entered are=");
	for(i=0;i<a;i++){
	printf("%d ",x[i]);
	sum+=x[i];
	}
	printf("\nthe total resistance is=%d",sum);
}
int main()
{
	int a;
	printf("enter the no.of resisters");
	scanf("%d",&a);
	print(a);
	return 0;
}
