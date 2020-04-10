#include<stdio.h>
#include<stdlib.h>
void pushA(int);
void pushB(int);
int popA();
int popB();
void enqueue();
void dequeue();
void display();
void create();
int stackA[100], stackB[100];
int top1 = -1, top2 = -1;
int count = 0;

/* Main Function */
int main()
{
    int c;
    printf("\nQUEUE USING STACKS IMPLEMENTATION\n\n");
    printf("\n1.ENQUEUE");
    printf("\n2.DEQUEUE");
    printf("\n3.DISPLAY");
    printf("\n4.EXIT");
    printf("\n");
    create();
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid Choice\n");
        }}}

void create()
{
    top1 = top2 = -1;
}

/*push an element to stack */
void pushA(int value)
{
    stackA[++top1] = value;
}

/*pop element from stack */
int popA()
{
    return(stackA[top1--]);
}

/*push an element on to stack */
void pushB(int value)
{
    stackB[++top2] = value;
}

/*pop an element from stack */
int popB()
{
    return(stackB[top2--]);
}
void enqueue()
{
    int info, i;
    printf("Enter the data : ");
    scanf("%d", &info);
    pushA(info);
    count++;
}

// Dequeue
void dequeue()
{
    int i;
    for (i = 0;i <= count;i++)
    {
        pushB(popA());
    }
    popB();
    count--;
    for (i = 0;i <= count;i++)
    {
        pushA(popB()); 
    }}

// Dispal elements
void display()
{
    int i;
    if(top1 == -1)
    {
        printf("\nEMPTY QUEUE\n");
    }
    else
    {
        printf("\nQUEUE ELEMENTS : ");
        for (i = 0;i <= top1;i++)
        {
            printf(" %d ", stackA[i]);
        }
        printf("\n");
}
}
