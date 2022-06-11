#include <stdio.h>
void search(int arr[100], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
		printf("the index is=%d ",i);
}
int main()
{
  int n,x,arr[100],i;
  printf("enter the no.of elements");
  scanf("%d",&n);
  printf("enter the key element");
  scanf("%d",&x);
  printf("enter the elements");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  search(arr,n,x);
	return 0;
}

