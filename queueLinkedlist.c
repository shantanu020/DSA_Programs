#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front = 0, *rear = 0, *newnode, *ptr;
struct queue *enqueue(struct queue *front);
struct queue *dequeue(struct queue *front);
void display(struct queue *front);
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
            front = enqueue(front);
            break;
        case 2:
            front = dequeue(front);
            break;
        case 3:
            display(front);
            break;
        default:
            printf("EXIT\n");
            exit(1);
        }
    }
    return 0;
}
struct queue *enqueue(struct queue *front)
{
    newnode = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (front == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    return front;
}
struct queue *dequeue(struct queue *front)
{
    // deletion from beg;
    ptr = front;
    front = front->next;
    free(ptr);
    printf("Element deleted\n");
    return front;
}
void display(struct queue *front)
{
    if (rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        ptr = front;
        while (ptr != 0)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}