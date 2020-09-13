// program for double linked list insert after node
#include<stdio.h>
#include<stdlib.h>
struct node
{
	float data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL,*tail=NULL,*cur,*t1,*t2;
void create()
{
	
	int n,i;
	printf("Enter how many no of nodes to be created:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:\n");
		scanf("%f",&(cur->data));
		cur->prev=NULL;
		cur->next=NULL;
		if(head==NULL)
			tail=head=cur;
		else
		{
			tail->next=cur;
			cur->prev=tail;
			tail=cur;
		}
	}
}
void insert_before_node()
{
	float value;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%f",&(cur->data));
	printf("Enter the data before which we need to perform insertion\n");
	scanf("%f",&value);
	t1=head;
	while(t1 != NULL && t1->data != value)
	{
		t2=t1;
		t1=t1->next;
	}
	t2->next=cur;
	cur->prev=t2;
	cur->next=t1;
	t1->prev=cur;
}
void insert_at_position()
{
	int c=1,pos;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%f",&(cur->data));
	printf("Enter position:\n");
	scanf("%d",&pos);
	t1=head;
	while(c<pos && t1 != NULL)
	{
		t2=t1;
		t1=t1->next;
		c++;
	}
	t2->next=cur;
	cur->prev=t2;
	cur->next=t1;
	t1->prev=cur;
}
void insert_at_begin()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%f",&(cur->data));
	cur->prev=NULL;
	cur->next=head;
	head->prev=cur;
	head=cur;
}

void insert_at_end()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%f",&(cur->data));
	cur->next=NULL;
	cur->prev=tail;
	tail->next=cur;
	tail=cur;
}
void insert_after_node()
{
	float value;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%f",&(cur->data));
	printf("Enter the data after which node we need to insert:\n");
	scanf("%f",&value);
	t1=head;
	while(t1->data != value && t1 != NULL)
	{
		t1=t1->next;
	}
	cur->next=t1->next;
	t1->next->prev=cur;	
	t1->next=cur;
	cur->prev=t1;
}

void delete_at_begin()
{
	cur=head;
	head=head->next;
	head->prev=NULL;
	printf("Deleted element is %f",cur->data);
	cur->next=NULL;
	free(cur);
}
void delete_at_end()
{
	cur=tail;
	tail=tail->prev;
	tail->next=NULL;
	printf("Deleted element is %f",cur->data);
	cur->prev=NULL;
	free(cur);
}
void delete_at_pos()
{
	int c=1,pos;
	printf("Enter position where we need to perform deletion:\n");
	scanf("%d",&pos);
	t1=head;
	while(c<pos && t1 != NULL)
	{
		t2=t1;
		t1=t1->next;
		c++;
	}
	t2->next=t1->next;
	t1->next->prev=t2;
	printf("Deleted element is %f\n",t1->data);
	free(t1);
}
void delete_before()
{
	float value;
	printf("Enter value before we need to delte:\n");
	scanf("%f",&value);
	t1=head;
	while(t1->next->data!=value && t1->next!=NULL)
	{
		t2=t1;
		t1=t1->next;
	}
	t2->next=t1->next;
	t1->next->prev=t2;
	printf("Deleted element is %f\n",t1->data);
	free(t1);

}
void delete_after()
{
	float value;
	printf("Enter value after we need to perform dltn:\n");
	scanf("%f",&value);
	t1=head;
	while(t1 != NULL && t1->data != value)
		t1=t1->next;
	t2=t1->next;
	t1->next=t2->next;
	t2->next->prev=t1;
	printf("Deleted element is : %f\n",t2->data);
	free(t2);
}

void display_in_forward()
{
	if(head==NULL)
		printf("DLList is empty\n");
	else
	{
		cur=head;
		printf("The elements of DLL are:\n");
		while(cur != NULL)
		{
			printf("%f <->",cur->data);
			cur=cur->next;
		}
	}
}
void display_in_backward()
{
	if(head==NULL)
		printf("DLList is empty\n");
	else
	{
		cur=tail;
		printf("The elements of DLL are:\n");
		while(cur != NULL)
		{
			printf("%f <-> ",cur->data);
			cur=cur->prev;
		}
	}
}
void sorting()
{
	struct node *p1,*p2;
	p1=head;
	int c=0,i,t;
	while(p1!=NULL)
	{
		c++;
		p1=p1->next;
	}
	for(i=0;i<c;i++)
	{	p2=head;
		while(p2->next != NULL)
		{
			if(p2->data>p2->next->data)
			{
				t=p2->data;
				p2->data=p2->next->data;
				p2->next->data=t;
			}
			p2=p2->next;
		}
	}
}
void search_for_element()
{
	float value,flag=0;
	printf("Enter value to be searched\n:");
	scanf("%f",&value);
	int c=1;
	t1=head;
	while(t1!=NULL)
	{
		if(t1->data==value)
		{
			flag=1;
			break;
		}
		t1=t1->next;
		c++;
	}
	if(flag==1)
	{
		printf("Element present in the list at %d position\n",c);
	}
	else
		printf("Element not present in the list\n");
}

	





int main()
{
	int ch;
	while(1)
	{
		printf("Program for double linked list\n");
		printf("1-create\n2-insert before node\n3-insert at position\n4-insert at begin\n5-insert at end");
		printf("\n6-insert after node\n7-delete at begin\n8-delete at end\n9-delete at pos\n10-delete befor\n");
		printf("11-delete after\n12-display in forward\n13-display in backward\n14-sorting\n15-search for element\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create();
				break;
			case 2:insert_before_node();
				break;
			case 3:insert_at_position();
				break;

			case 4:insert_at_begin();
				break;
			case 5:insert_at_end();
				break;
			case 6:insert_after_node();
				break;
			case 7:delete_at_begin();
				break;
			case 8:delete_at_end();
				break;
			case 9:delete_at_pos();
				break;
			case 10:delete_before();
				break;
			case 11:delete_after();
				break;
			case 12:display_in_forward();
				break;
			case 13:display_in_backward();
				break;
			case 14:sorting();
				break;
			case 15:search_for_element();
				break;
			case 16:exit(0);
				break;
		}
	}
}


	
	