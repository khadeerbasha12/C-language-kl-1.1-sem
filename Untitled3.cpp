#include<stdio.h>
#define size 5
typedef struct 
{
	int front;
	int rear;
	int data[size];
}queue;
queue q,*q1;
void enqueue(int ele)
{
	if(q1->rear==size-1){
	printf("queue is full");
	return;
	}
	else if(q1->front==-1&&q1->rear==-1)
	{
		q1->front=0;
		q1->rear=0;
		q1->data[q1->rear]=ele;
	}
	else
	{
		q1->rear=q1->rear+1;
		q1->data[q1->rear]=ele;
	}
}
int  dequeue()
{
	int ele;
	if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
	printf("queue is empty");
	else
	{
		ele=q1->data[q1->front];
		q1->front=q1->front+1;
		return ele;
	}
}
void display()
{
	int i;
	if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
		printf("queue is empty");
	else
	{
		for(i=q1->front;i<=q1->rear;i++)
		printf("%d ",q1->data[i]);
	}
}
int main()
{
	int choice;
	char x;
	q1=&q;
	q1->front=-1;
	q1->rear=-1;
	int ele;
	do{
	printf("1.enqueue\n2.dequeue\n3.display");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			
			printf("enter the element");
			scanf("%d",&ele);
			enqueue(ele);
			break;
		case 2:
			ele=dequeue();
			printf("removed element is=%d",ele);
			break;
		case 3:
			display();
			break;
		default:
			printf("invalid choice");
	}
	printf("\ndo you continue(y/n)");
	scanf(" %c",&x);
}
while(x!='n');
}
