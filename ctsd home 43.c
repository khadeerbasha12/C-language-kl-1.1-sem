 #include<stdio.h>
 #include<math.h>
void getsum(int n)
{
	 while(n%2==0)
	 {
	 	printf("2\n");
	 	n=n/2;
	 }
	 int i;
	 for(i=3;i<=sqrt(n);i=i+2)
	 {
	 	while(n%i==0)
	 	{
	 		printf("%d\n",i);
	 		n=n/i;
		 }
	 }
	 if(n>2)
	 printf("%d\n",n);
}
int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	printf("all prime numbers between %d are=\n",n);
	getsum(n);
	return 0;
}
