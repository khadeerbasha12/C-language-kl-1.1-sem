#include<stdio.h>
int predictNumber(int x)
{
int points;
if(x>0){
points=1000;
}
else if(x<0){
points=-200;
}
else{
points=5000;
}
return points;
}
int main()
{
int x;
int res;
printf("\n Enter a value :");
scanf("%d",&x);
res=predictNumber(x);
printf("\n Points:%d",res);
return 0;

}
