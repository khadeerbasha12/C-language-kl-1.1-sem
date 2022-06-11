#include <stdio.h>
int pattern(int n[])
{
int i,j;
for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("%d",n[j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,n[100];
    printf("Enter a number: ");
    for(i=1;i<=5;i++)
    scanf("%d", &n[i]);
    pattern(n);
return 0;
}

