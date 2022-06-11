 #include<stdio.h>
void gettemp(float x,char a)
{
	if(x>99&&a=='y')
	printf("send to covid 19 center");
	else if(x>99&&a=='n')
	printf("send him to quarantine center");
	else if(x<99&&a=='y')
	printf("allocate seperate workspace");
	else if(x<99&&a=='n')
	printf("send him to regular workspace");
}
int main()
{
	float x;	
	char a;

	printf("enter the temp");
	scanf("%f",&x);
	printf("the person having cold or not");
	scanf(" %c",&a);
	gettemp(x,a);
	return 0;
}
