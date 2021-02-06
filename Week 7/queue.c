//Program for queue
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 5
int f = -1 , r = -1 , queue[MaxSize];
int is_Full()
{
	if(r == MaxSize - 1)
		return 1;
	else
		return 0;
}
int is_Empty()
{
	if(f == -1)
		return 1;
	else
		return 0;
}
void enqueue(int data)
{
	if(f == -1)
		f = 0;
	queue[++r] = data;
}
int dequeue()
{
	
	return(queue[f++]);
}
void display()
{
	for(int i = f; i <= r; i++)
		printf("%d\t",queue[i]);
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("Program for stack using array\n");
		printf("\n1-enqueue\n2-dequeue\n3-display\n4-exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: if(is_Full())
				printf("Queue overflow\n");
			else
			{
				printf("Enter data to be inserted:\n");
				scanf("%d",&x);
				enqueue(x);
			}
			break;
		case 2:if(is_Empty())
				printf("Queue underflow\n");
			else
				printf("Deleted element is %d\n",dequeue());
			break;
		case 3:display();
			break;
		case 4: exit(0);
		}
	}
}


		