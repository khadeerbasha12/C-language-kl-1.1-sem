#include<stdio.h>
int func();
int counter=5;
int main()
{
	printf("%d\n",func());
	printf("%d\n",func());
	printf("%d\n",func());
	printf("%d\n",func());
	printf("%d\n",func());
	return 0;
}
int func()
{
	return counter++;
}
