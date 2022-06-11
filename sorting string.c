#include<stdio.h>
#include<string.h>
int main()
{
	char name[100][100];
	int n,i;
	printf("enter the no.of names");
	scanf("%d",&n);
	printf("enter the names");
	for(i=0;i<n;i++)
	scanf("%s",name[i]);
	printf("\nthe names are");
	for(i=0;i<n;i++)
	printf("%s\n",name[i]);
	int pass=0;
	char temp[100];
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(name[i],name[i+1])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[i+1]);
				strcpy(name[i+1],temp);
			}
		}
	}
		printf("\nthe sorted names are");
	for(i=0;i<n;i++)
	printf("%s\n",name[i]);
	return 0;
}
