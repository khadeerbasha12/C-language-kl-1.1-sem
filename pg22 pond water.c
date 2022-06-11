#include <stdio.h>
#include <math.h>
float pond(float days)
{
    float ounces = days*(days+1)*(2*days+1)/6;
    float liters = ounces*0.03;
    return liters;
}
int main()
{
    float days;
    float ans;
    printf("enter days: ");
    scanf("%f",&days);
    ans = pond(days);
    printf("Total liter in the pond: %.2f liters",ans);
    return 0;
}

