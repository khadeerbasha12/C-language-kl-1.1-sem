#include<stdio.h>
void train(int bogies,int stations)
{
    int f;
    int i,j;
    for(i=1; i<=stations; i++)
    {
        f=0;
        for(j=1; j<=stations; j++)
        {
            if(i%j==0)
                f++;
        }
        if(f==2)
            bogies = bogies-2;
    }
    printf("Total bogies are in station Y: %d",bogies);
}
int main()
{
	int bogies;
    printf("enter the number of bogies");
    scanf("%d",&bogies);
    int stations;
    printf("enter the no.of stations");
    scanf("%d",&stations);
    train(bogies,stations);
	return 0;
}
