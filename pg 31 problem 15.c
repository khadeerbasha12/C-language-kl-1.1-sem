#include<stdio.h>
int prime(int n,int i)
{
	if(i==1){
	return 1;}
	else if(n%i==0){
	return 0;}
	else{
	return prime(n,i-1);}
}
int main()
{
	int n,s;
	printf("enter the number");
	scanf("%d",&n);
	s=prime(n,n/2);
	if(s==1)
	printf("it is prime");
	else
	printf("it is composite");
	return 0;
}
