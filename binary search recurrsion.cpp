#include <stdio.h>
int binary(int array[], int min, int max, int key){
   if (max >= min){
      int mid= min+max/2;
      if (array[mid] == key)
         return mid; 
      else if (array[mid] > key)
         return binary(array, min, mid-1, key);
      return binary(array, mid+1, max, key);
   }
   else
   return 0;
}
int main()
{
   int arr[100];
   int n;
   int key,i;
   printf("enter the size");
   scanf("%d",&n);
   printf("enter the array");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   printf("enter the key element");
   scanf("%d",&key);
   int s= binary(arr, 0, n-1, key);
   if(s == 0 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",s);
   }
   return 0;
}
