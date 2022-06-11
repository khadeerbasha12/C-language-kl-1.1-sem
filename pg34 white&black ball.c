#include<stdio.h>
void getballcolour(int x)
{
	(x%2==0)?printf("the ball is white"):printf(" the ball is black");
}
int main()
{
	int x;
	printf("\n enter the value of x");
	scanf("%d",&x);
	getballcolour(x);
	return 0;	
} 
