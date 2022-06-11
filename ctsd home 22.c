   #include<stdio.h>
 void getprod(int arr[5])
 {
 	int odd=1;
 	int i,x;
 	for(i=0;i<5;i++)
 	{
 	printf("enter the number");
 	scanf("%d",&arr[i]);
 	if(arr[i]%2==1)
 	odd=odd*arr[i];
 	else
 	x=x+arr[i];}
 	printf("odd product=%d",odd);
 }
 int main()
 {
 	int arr[5];
 	getprod(arr);
 	return 0;
}
