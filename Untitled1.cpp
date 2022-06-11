#include<stdio.h>
void getsum(int *pa,int *pb)
{
	*pa=*pa^*pb;
	*pb=*pb^*pa;
	*pa=*pa^*pb;
	printf("the swapped number are=%d %d",*pa,*pb);
}
int main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d %d",&a,&b);
	getsum(&a,&b);
	return 0;
}
