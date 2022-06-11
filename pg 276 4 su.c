#include<stdio.h>
#include<math.h>
void getnum(int n)
{
    int x,y,z,sum=0;
    y=n;
    z=log10(n)+1;
    while(n!=0)
    {
    	x=n%10;
    	sum=sum+pow(x,z);
    	n=n/10;
	}
    if(sum==y)
    printf("armstrong");
    else
    printf("not armstrong");
}
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	getnum(n);
	return 0;
}
