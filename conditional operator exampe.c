#include<stdio.h>
int main()
{
	int a,b,big;
	printf("\n enter the value of a and b");
	scanf("%d %d",&a,&b);
    (a>b)?(big=a):(big=b);
	printf("\n answer is:%d",big);
	return 0;       
}
