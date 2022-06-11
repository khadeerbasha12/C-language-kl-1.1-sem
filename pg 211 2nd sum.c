#include<stdio.h>
struct lab
{
	int newsys,repsys;
};
int main()
{
	struct lab lab1,lab2,lab3,lab4,lab5;
	printf("enter the no.of new systems  and repairable systems in 1st lab");
	scanf("%d %d",&lab1.newsys,&lab1.repsys);
	printf("enter the no.of new systems  and repairable systems in 2nd lab");
	scanf("%d %d",&lab2.newsys,&lab2.repsys);
	printf("enter the no.of new systems  and repairable systems in 3rd lab");
	scanf("%d %d",&lab3.newsys,&lab3.repsys);
	printf("enter the no.of new systems  and repairable systems in 4th lab");
	scanf("%d %d",&lab4.newsys,&lab4.repsys);
	printf("enter the no.of new systems  and repairable systems in 5th lab");
	scanf("%d %d",&lab5.newsys,&lab5.repsys);
	int totnew=lab1.newsys+lab2.newsys+lab3.newsys+lab4.newsys+lab5.newsys;
	int totrep=lab1.repsys+lab2.repsys+lab3.repsys+lab4.repsys+lab5.repsys;
	printf("\nthe total no.of systems to be repaired are=%d",totrep);
	printf("\nthe total no.of new systems to be bought are=%d",totnew);
	return 0;
}
