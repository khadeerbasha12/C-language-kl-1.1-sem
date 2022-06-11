#include<stdio.h>
#define size 6
typedef struct
{
	int data[size];
	int top;
}stk;
stk s1,*s;
void push(int ele)
{
	if(s->top==size-1)
	{
		printf("\n stack overflow");
		return;
	}
	else 
	s->top=s->top+1;
	s->data[s->top]=ele;
}
int pop()
{
	int ele;
	if(s->top==-1){
	printf("\n stack underflow");
	return -1;
}
ele=s->data[s->top];
s->top=s->top-1;
return (ele);
}
int findmax()
{
	int max=0,i;
	if(s->top==-1)
	{
	printf("stack is empty");
	return -1;
	}
	else
	{
		for(i=s->top;i>=0;i--)
		{
		if(s->data[i]>max)
		max=s->data[i];
		}
		return max;
	}
}
int findmin()
{
	int min,i;
		if(s->top==-1){
	printf("stack is empty");
	return -1;}
	else{
	min=s->data[s->top];
	for(i=s->top;i>=0;i--)
	{
		if(s->data[i]<min)
		min=s->data[i];
	}
	return min;
	}
}
int elesum()
{
	int sum=0,i;
	if(s->top==-1){
	printf("stack is empty");
	return -1;
	}
	for(i=0;i<=s->top;i++)
	sum=sum+s->data[i];
	return sum;
}
int count()
{
	int c;
		int i;
	if(s->top==-1){
	printf("\n stack is empty");
	return;
	}
	else
	{
			for(i=s->top;i>=0;i--)
			c++;
			return c;
	}
}
int find(int search)
{
	int i;
	int x;
	if(s->top==-1){
	printf("\n stack is empty");
	return;
	}
	else
	{
	for(i=s->top;i>=0;i--)
	{
		if(search==s->data[i])
		return 0;	
	}
}
}
void display()
{
	int i;
	if(s->top==-1)
	printf("\n stack is empty");
	else
	{
		for(i=s->top;i>=0;i--)
		printf("\n %d",s->data[i]);
		
	}
}
int main()
{
	int choice;
	char c;
	int e,max,min;
	int sum;
	int co;
	int a;
	int search;
	s=&s1;
	s->top=-1;
	do
	{
		printf("\nenter \n1.PUSH\n2.POP\n3.DISPLAY\n4.max element\n5.min element\n6.sum of elements in stack\n7.count\n8.search an element");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n enter an element to push into stack");
				scanf("%d",&e);
				push(e);
				break;
				case 2:
					e=pop();
					printf("\n removed element:%d",e);
					break;
					case 3:
						display();    
						break;
						case 4:
						max=findmax();
						printf("the max number is %d",max);
						break;
					case 5:
						min=findmin();
						printf("the min element is %d",min);
						break;
						case 6:
							sum=elesum();
							printf("%d",sum);
							break;
						case 7:
							co=count();
							printf("the no.of elements are=%d",co);
							break;
						case 8:
							printf("enter the number you want to search for:");
							scanf("%d",&search);
							a=find(search);
							if(a==0)
							printf("element found");
							else
							printf("\nelement not found");
							break;
						default:printf("\n invald choice");
					}
	printf("\n DO you want to continue(y/n)");
	scanf(" %c",&c);
	}while(c!='n');
}		
