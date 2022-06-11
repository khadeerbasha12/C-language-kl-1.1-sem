#include<stdio.h>
int main()
{
char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
float avg=(alpha[0]+alpha[4]+alpha[8]+alpha[14]+alpha[20])/5.0;
printf("\n%f",avg);
return 0;
}


