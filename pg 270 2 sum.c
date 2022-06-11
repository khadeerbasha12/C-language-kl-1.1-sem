#include<stdio.h>
void getprint(int n)
{
	while(n>=1){
	printf("%d\n",n);
	n--;}
}
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	getprint(n);
	return 0;
	
}
