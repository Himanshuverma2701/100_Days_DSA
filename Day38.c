#include <stdio.h>

#define MAX 100

int deque[MAX];
int front = -1;
int rear = -1;

void push_front(int x)
{
    if(front == 0)
        printf("Deque Overflow\n");
    else
    {
        if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            front--;
        }
        deque[front] = x;
    }
}

void push_back(int x)
{
    if(rear == MAX-1)
        printf("Deque Overflow\n");
    else
    {
        if(front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        deque[rear] = x;
    }
}

void pop_front()
{
    if(front == -1)
        printf("Deque Underflow\n");
    else
    {
        printf("Deleted: %d\n", deque[front]);

        if(front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void pop_back()
{
    if(rear == -1)
        printf("Deque Underflow\n");
    else
    {
        printf("Deleted: %d\n", deque[rear]);

        if(front == rear)
            front = rear = -1;
        else
            rear--;
    }
}

void show_front()
{
    if(front == -1)
        printf("Deque Empty\n");
    else
        printf("Front element: %d\n", deque[front]);
}

void show_back()
{
    if(rear == -1)
        printf("Deque Empty\n");
    else
        printf("Rear element: %d\n", deque[rear]);
}

void size()
{
    if(front == -1)
        printf("Size: 0\n");
    else
        printf("Size: %d\n", rear-front+1);
}

void display()
{
    if(front == -1)
        printf("Deque Empty\n");
    else
    {
        for(int i=front;i<=rear;i++)
            printf("%d ",deque[i]);
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while(1)
    {
        printf("\n1.Push Front\n2.Push Back\n3.Pop Front\n4.Pop Back\n5.Front\n6.Back\n7.Size\n8.Display\n9.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&value);
                push_front(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&value);
                push_back(value);
                break;

            case 3:
                pop_front();
                break;

            case 4:
                pop_back();
                break;

            case 5:
                show_front();
                break;

            case 6:
                show_back();
                break;

            case 7:
                size();
                break;

            case 8:
                display();
                break;

            case 9:
                return 0;
        }
    }
}