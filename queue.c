#include<stdio.h>
#define size 6
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
int findmax()
{
	int max=0,i;
		if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
		printf("queue is empty");
		else
		{
			for(i=q1->front;i<=q1->rear;i++)
			{
				if(q1->data[i]>max)
				max=q1->data[i];
			}
			return max; 
		}
}
int elesum()
{
	int sum=0,i;
		if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
		printf("queue is empty");
		else
		{
			for(i=q1->front;i<=q1->rear;i++)
			{
				sum=sum+q1->data[i];
				}	
				return sum;
		}
}
int find(int search)
{
	int i;
		if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
		printf("queue is empty");
		else
		{
				for(i=q1->front;i<=q1->rear;i++)
				{
					if(search==q1->data[i])
					return 0;
				}
		}
}
int findmin()
{
	int i;
	int min=q1->data[0];
		if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
		printf("queue is empty");
		else
		{
			for(i=q1->front;i<=q1->rear;i++)
			{
				if(q1->data[i]<min)
				min=q1->data[i];
				}
				return min;	
		}
}
int count()
{
	int c,i;
		if(q1->front>q1->rear||q1->front==-1&&q1->rear==-1)
		printf("queue is empty");
		else
		{
				for(i=q1->front;i<=q1->rear;i++)
				c++;
				return c;
		}
}
int main()
{
	int choice;
	char x;
	int search;
	int a,b,c,d,e;
	q1=&q;
	int s;
	q1->front=-1;
	q1->rear=-1;
	int ele;
	do{
	printf("1.enqueue\n2.dequeue\n3.display\n4.count\n5.find max\n6.find min\n7.sum of elements in queue\n8.search an element\n9.count");
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
		case 4:
			a=count();
			printf("%d",a);
			break;
		case 5:
				b=findmax();
				printf("the maximum number is=%d",b);
				break;
		case 6:
			c=findmin();
			printf("the minimum number is=%d",c);
			break;
		case 7:
			d=elesum();
			printf("the sum of elemsnt is=%d",d);
			break;
		case 8:
			printf("enter the number you want to search for:");
			scanf("%d",&search);
			e=find(search);
			if(e==0)
			printf("element found");
			else
			printf("element not found");
			break;
		case 9:
			s=count();
			printf("the count is=%d",s);
			break;
		default:printf("invalid choice");
	}
	printf("\ndo you continue(y/n)");
	scanf(" %c",&x);
}
while(x!='n');
}
