 #include<stdio.h>
void reverse(long int n)
{
	long int rev=0;
	int rem;
	int m=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("the reverse number is=%d\n",rev);
	if(rev==m)
	printf("the given number is palindrome");
	else
	printf("not a palindrome number");
}
int main()
{
	long int n;
	printf("enter the number");
	scanf("%ld",&n);
	reverse(n);
	return 0;
}
