//Program for stack using single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL,*cur;
void push()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data to be pushed:\n");
	scanf("%d",&(cur->data));
	cur->next = top;
	top = cur;
}
void pop()
{
	cur = top;
	top = cur->next;
	printf("Deleted Element is %d\n",(cur->data));
	cur->next = NULL;
	free(cur);
}
void display()
{
	if(top == NULL)
		printf("Stack Underflow\n");
	else
	{
		cur = top;
		printf("Stack->");
		while(cur != NULL)
		{
			printf("%d->" ,cur -> data);
			cur = cur -> next;
		}
	}
}
void peek()
{
	if(top != NULL)
		printf("The top most element is %d",top -> data);
	else
		exit(1);
}
int main()
{
	int ch;
	while(1)
	{
		printf("\nProgram for stack\n");
		printf("\n1-push\n2-pop\n3-display\n4-peek\n5-exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1 :push();
			break;
		case 2 :pop();
			break;
		case 3 :display();
			break;
		case 4 :peek();
			break;
		case 5 :exit(0);
			break;
		}
	}
}


	