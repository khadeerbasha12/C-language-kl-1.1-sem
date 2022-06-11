#include<stdio.h>
int *bubble_sort(int a[],int n)
{
int *ptr=a;
int pass,j;
int temp;
for(pass=1;pass<n;pass++)
{
for(j=0;j<n-pass;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
return ptr;
}
int main()
{
int a[100],n,i,*ptr;
printf("\n Enter size of array");
scanf("%d",&n);
printf("\n Enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
ptr=bubble_sort(a,n);
printf("\nafter sort\n");
for(i=0;i<n;i++)
{
printf("%d ",*ptr);
ptr++;
}
return 0;
}
