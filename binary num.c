#include<stdio.h>
void binary(int n)
{
	int binary=0;
	int rem;
	int place=1;
	while(n>0)
	{
		rem=n%2;
		binary=binary+rem*place;
		n=n/2;
		place=place*10;
	}
	printf("the binary number is =%d",binary);
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	binary(n);
	return 0;
}
