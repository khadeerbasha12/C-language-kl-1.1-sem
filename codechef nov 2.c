#include <stdio.h>

int main(void) {
	int n,i;
	int x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d %d",&x,&y);
	     if(x==y){
	    printf("yes\n");}
	    else if(x%2==0&&y==0)
	    {printf("yes\n");}
	    else if(x==0&&y%2==0)
	    {printf("yes\n");}
	    else
	    {printf("NO\n");}
	}

	return 0;
}


