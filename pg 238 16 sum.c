#include<stdio.h>
void getsum(int x,int y)
{
	char s;
	int a,b,c,d,e;
	printf("enter your operator");
	scanf(" %c",&s);
	switch (s)
	{
		case '+':
			a=x+y;
			printf("sum=%d",a);
			break;
		case '-':	
			b=x-y;
			printf("subtraction=%d",b);
			break;
		case '/':
			c=x/y;
			printf("division=%d",c);
			break;
		case '*':
			d=x*y;
			printf("multipliction=%d",d);
			break;
		case '%':
			e=x%y;
			printf("mod=%d",e);
			break;
		default:
		printf("symbol is not present");
		break;	
	}
}
int main()
{
	int x,y;
	printf("enter the value of x and y");
	scanf("%d %d",&x,&y);
	getsum(x,y);
	return 0;
}
