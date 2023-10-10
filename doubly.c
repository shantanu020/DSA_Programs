#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = 0, *newnode, *ptr;
struct node *create(struct node *head);
struct node *display(struct node *head);
struct node *insertBeg(struct node *head);
struct node *insertEnd(struct node *head);

int main()
{
    int option;

    do
    {
        printf("Choose options:\n");
        printf("1.Create\n2.Display\n3.insertBeg\n4.insertEnd\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            head = create(head);
            break;
        case 2:
            head = display(head);
            break;
        case 3:
            head = insertBeg(head);
            break;
        case 4:
            head = insertEnd(head);
            break;
        default:
            printf("Exit\n");
        }
    } while (option != 0);
    return 0;
}
struct node *create(struct node *head)
{
    int choice = 1;

    while (choice)
    {
        printf("Enter data\n");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            newnode->prev = 0;
            head = ptr = newnode;
        }
        else
        {
            newnode->prev = ptr;
            ptr->next = newnode;
            ptr = newnode;
        }
        printf("Do you want to continue (1/0):\n");
        scanf("%d", &choice);
    }
    return head;
}
struct node *display(struct node *head)
{
    ptr = head;
    while (ptr != 0)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    return head;
}
struct node *insertBeg(struct node *head)
{
    ptr = head;
    printf("Enter data\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = ptr;
    newnode->prev = 0;
    ptr->prev = newnode;
    head = newnode;
    return head;
}
struct node *insertEnd(struct node *head)
{
    ptr = head;
    printf("Enter data\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    newnode->next = 0;
    return head;
}