#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start;
struct node *new_node;
struct node *temp;
struct node *temp1;
void create(int n)
{
	int ele;
	int i;
	for(i=1;i<=n;i++)
	{
		printf("enter an element");
		scanf("%d",&ele);
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=ele;
		new_node->next=NULL;
		if(start==NULL)
		start=new_node;
		else
		{
			temp=start;
			while(temp->next!=NULL)
			temp=temp->next;
			temp->next=new_node;
		}
	}
}

void display()
{
	if(start==NULL)
	printf("no nodes in list");
	temp=start;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
void del_begin()
{
	if(start==NULL)
	{
		printf("\n no nodes in the list");
		return;
	}
	else
	{
		temp=start;
		start=temp->next;
		free(temp);
	}		
}
void del_end()
{
	if(start==NULL)
	{
		printf("\n no nodes in the list");
		return;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		temp=temp->next;
		free(temp->next);
		temp->next=NULL;
	}	
}
void del_pos()
{
	int pos,i;
	if(start==NULL)
	{
		printf("\n no nodes in the list");
		return;
	}
	else
	{
		printf("\n enter the position");
		scanf("%d",&pos);
		temp=start;
		for(i=1;i<=pos-2;i++)
		temp=temp->next;
		temp1=temp->next;
		temp->next=temp1->next;
		free(temp1);
	}
	
}
void insert_begin()
{
	int ele;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&ele);
	new_node->data=ele;
	new_node->next=NULL;
	new_node->next=start;
	start=new_node;
}
void insert_end()
{
		int ele;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&ele);
	new_node->data=ele;
	new_node->next=NULL;
	temp=start;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=new_node;
}
void insert_pos()
{
		int ele,pos,i;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&ele);
	new_node->data=ele;
	new_node->next=NULL;
	printf("\n enter thhe position");
	scanf("%d",&pos);
	temp=start;
	for(i=1;i<pos-1;i++)
	temp=temp->next;
	new_node->next=temp->next;
	temp->next=new_node;
}
int main()
{
	int n;
	start=NULL;
	int choice;
	char x;
	do
	{
		printf("1.create\n2.display\n3.insert at begin\n4.insert at end\n5.insert at required position\n6.delete at begin\n7.delete at end\n8.delete at required position");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n enter no.of nodes");
				scanf("%d",&n);
				create(n);
				break;
			case 2:
				display();
				break;
			case 3:
				insert_begin();
				break;
			case 4:
				insert_end();
				break;
			case 5:
				insert_pos();
				break;	
			case 6:
				del_begin();
				break;
			case 7:
				del_end();
				break;
			case 8:
				del_pos();
				break;
				default:printf("\ninvalid choice");
		}
		printf("\n do you want to continue(y/n)");
		scanf(" %c",&x);
	}while(x!='n');
}
