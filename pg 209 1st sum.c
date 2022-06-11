#include<stdio.h>
#include<math.h>
struct dis
{
	int x,y;
};
int main()
{
	struct dis start,end;
	printf("enter starting point cordinates");
	scanf("%d %d",&start.x,&start.y);
	printf("enter the ending point cordinates");
	scanf("%d %d",&end.x,&end.y);
	float res=sqrt((end.x-start.x)*(end.x-start.x)+(end.y-start.y)*(end.y-start.y));
	printf("the distance is=%f",res);
	return 0;
}
