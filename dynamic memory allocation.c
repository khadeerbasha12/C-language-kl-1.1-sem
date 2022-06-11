#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i;
	int *p;
	printf("enter no.of elements");
	scanf("%d",&n);
	p=(int)malloc(n*sizeof(int));
	if(p==NULL)
	printf("memory not allocated");
	else
	{
		printf("enter the elements");
		for(i=0;i<n;i++)
		scanf("%d",p+i);
		printf("elements are");
		for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	}
	return 0;
}
