#include<stdio.h>
int power(int n,int m)
 {
 	if(m==1)
 	return n;
 	else
 	return n*power(n,m-1);
 }
int main()
{
	int n,m,s;
	printf("enter the values of number and its power");
	scanf("%d %d",&n,&m);
	s=power(n,m);
	printf("the result is=%d",s);
	return 0;
}
