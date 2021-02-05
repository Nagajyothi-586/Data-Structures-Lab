//Program for Stack abstract type using Arrays
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 5
int arr[MaxSize] , top = -1; //Initially stack is Empty.
void push(int item)
{
	top++;
	arr[top]=item;
}
int pop()
{
	return(arr[top--]);
}
int is_Empty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}
int is_Full()
{
	if(top == MaxSize-1)
		return 1;
	else
		return 0;
}
int peek()
{
	return(arr[top]);
}
void display()
{
	for(int i = top ; i >= 0 ; i--)
		printf("%d\t" ,arr[i]);
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("\n1-push\n2-pop\n3-display\n4-peek\n5-exit\n");
		printf("Enter your choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: if(is_Full())
				printf("Stack is in Overflow condition\n");
			else
			{
				printf("Enter element to be pushed:\n");
				scanf("%d",&x);
				push(x);
			}
			break;
		case 2: if(is_Empty())
				printf("Stack is in Underflow condition\n");
			else
			{
				x = pop();
				printf("Deleted Element is %d",x);
			}
			break;
		case 3: display();
			break;
		case 4:printf("Top most element in the stack is %d",peek());
			break;
		case 5:exit(0);
		}
	}
}

	
