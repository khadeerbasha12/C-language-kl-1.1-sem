#include<stdio.h>
void print(int a)
{
	int x[100];
	int i,max=0;
	printf("enter the resistance");
	for(i=0;i<a;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("the resistances entered are=");
	for(i=0;i<a;i++){
	printf("%d ",x[i]);
	if(max<x[i])
	max=x[i];
	}
		printf("\nthe max is=%d",max);

}
int main()
{
	int a;
	printf("enter the no.of resisters");
	scanf("%d",&a);
	print(a);
	return 0;
}
