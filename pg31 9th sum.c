#include <stdio.h>
#include <math.h>
float problems(float days,float x)
{
    float n = days*(days+1)/2*x/60;
    return n;
}
int main()
{
    float days,minutes;
    float ans;
    printf("enter total days");
    scanf("%f",&days);
    printf("enter total minutes to solve each problem");
    scanf("%f",&minutes);
    ans=problems(days,minutes);
    printf("output:%.4f",ans);
    return 0;
}


