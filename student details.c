#include<stdio.h>
int main()
{
unsigned long int idno;
char name[60];
int age;
unsigned long int mobile;
float height;
double income;
printf("\n enter your id no");
scanf("%id",&idno);
printf("\n enter your name");
scanf("%s",&name);
printf("\n enter your age");
scanf("%d",&age);
printf("\n student id:%1d",idno);
printf("\n student name:%s",name);
printf("\n student age:%d",age);
printf("\n student age:%010d",age);
printf("\n%x",age);
return 0;
}
