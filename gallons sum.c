#include <stdio.h>
 float getlitres(float gallons)
 { 
    float lts=gallons*3.785;
    float bl=lts-36;
    return (bl);
 }
 int main()
 {
    float x;
    float a;
printf("\n enter number of gallons");
scanf("%f",&x);
a=getlitres (x);
printf("\n remaining milk with krishna:%5f",a);
return 0;
 }
