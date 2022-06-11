#include<stdio.h>
void swap(int a,int b)
{
	a=a^b;
	b=b^a;
	a=a^b;
	printf(" the swapped numbers are=%d %d",a,b);
}
int main()
{
	int a,b;
	printf(" enter the values of a and b");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}
