#include<stdio.h>
void gettile(int x[])
{
int i;
printf("\n Enter a tile number");
for(i=0;i<8;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<8;i++){
printf("The tile numbers on which liana stepped %d",x[i]);
if(x[i]%2==0)
printf("\n Lucky tile\n");
}
}
int main()
{
int x[8];
gettile(x);
return 0;
}

