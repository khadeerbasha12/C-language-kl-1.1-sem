#include <stdio.h>
#include <math.h>
float tree(float days)
{
    float inches = 2*days-1;
    float centimeter = inches*2.54;
    return centimeter;
}
int main()
{
    float days;
    float ans;
    printf("enter days: ");
    scanf("%f",&days);
    ans = tree(days);
    printf("Total height of the tree: %.2f centimeters",ans);
    return 0;
}

