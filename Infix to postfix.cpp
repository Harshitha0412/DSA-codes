#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void enqueue(int);
void dequeue();
void display();
int queue[SIZE], front=-1, rear=-1;
int main()
{
	while(1){
		int choice,element;
		printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the element to be added: ");
			scanf("%d", &element);
			printf("insertion success");
			enqueue(element);
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: exit(1);
			default: printf("You have entered incorrect choice");
		}
	}
}
void enqueue(int element)
{
	if(rear==SIZE-1)
	{
		printf("Overflow");
	}
	else
	{
		if(front==-1)
		front=0;
		queue[rear]=element;
		rear++;
	}
}
void dequeue()
{
	if(front=rear=-1)
	{
		printf("Underflow");
	}
	else
	{
		printf("Deleted: %d", queue[front]);
		front++;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		for(i=rear;i>=0;i--)
		printf("%d\n", queue[i]);
	}
}
