#include <stdio.h>
#include<stdlib.h>
int x, size = 100, queue[100], rear = -1, front = -1;
void enqueue(int x);
void dequeue();
void display();
int main()
{
    int option;
    printf("Choose from menu\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    while (1)
    {
        printf("Choose option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter data\n");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("EXIT\n");
            exit(1);
        }
    }
    return 0;
}
void enqueue(int x)
{
    if (rear == size - 1)
    {
        printf("overflow\n");
    }
    else if (rear == -1 && front == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else 
    {
        front++;
        printf("Element deleted\n");
    }
}
void display()
{
    if (front == -1&& rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
