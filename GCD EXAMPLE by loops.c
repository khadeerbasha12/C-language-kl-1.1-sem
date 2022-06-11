#include<stdio.h>
int gcd(int m,int n)
{
	int r;
	while(n!=0)
	 {#include<stdio.h>
int gcd(int m,int n)
{
	int r;
	while(n!=0)
	 {
	 	r=m%n;
	 	if(r==0)
	 	return n;
	 	m=n;
	 	n=r;
	 }
}
int main()
{
	int m,n,s;
	printf("enter the numbers");
	scanf("%d %d",&m,&n);
	s=gcd(m,n);
	printf("gcd is=%d",s);
	return 0;
} 
