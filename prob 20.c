#include<stdio.h>
void swap(int a,int b,int c)
{
	c=a;
	a=b;
	b=c;
	printf("\n the swapped values are=%d %d",a,b);
	
}
int main()
{
	int a,b,c;
	printf("enter the vakue of a and b");
	scanf("%d %d",&a,&b);
	swap(a,b,c);
	return 0;
}
