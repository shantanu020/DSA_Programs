#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *newnode, *ptr, *preptr; // Globally declaring most frequently used variables
struct node *create(struct node *head);
struct node *display(struct node *head);
struct node *insert_beg(struct node *head);
struct node *insert_end(struct node *head);
struct node *insert_before(struct node *head);
struct node *insert_after(struct node *head);
struct node *insert_at_pos(struct node *head);
struct node *del_beg(struct node *head);
struct node *del_end(struct node *head);
struct node *del_before(struct node *head);
struct node *del_after(struct node *head);
struct node *del_at_pos(struct node *head);
struct node *reverse(struct node *head);
struct node *count(struct node *head);
struct node *del(struct node *head);
int main()
{
    int option;
    printf("1.Create linked list\n");
    printf("2.Display linked list\n");
    printf("3.Insert_beg\n");
    printf("4.Insert_end\n");
    printf("5.Insert_before\n");
    printf("6.Insert_after\n");
    printf("7.Insert_at_pos\n");
    printf("8.del_beg\n");
    printf("9.del_end\n");
    printf("10.del_before\n");
    printf("11.del_after\n");
    printf("12.del_at_pos\n");
    printf("13.reverse\n");
    printf("14.count\n");
    printf("15.Delete\n");
    printf("16.Exit\n");
    printf("Choose options(1 to 16):\n");
    do
    {
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
            head = insert_beg(head);
            break;
        case 4:
            head = insert_end(head);
            break;
        case 5:
            head = insert_before(head);
            break;
        case 6:
            head = insert_after(head);
            break;
        case 7:
            head = insert_at_pos(head);
            break;
        case 8:
            head = del_beg(head);
            break;
        case 9:
            head = del_end(head);
            break;
        case 10:
            head = del_before(head);
            break;
        case 11:
            head = del_after(head);
            break;
        case 12:
            head = del_at_pos(head);
            break;
        case 13:
            head = reverse(head);
            break;
        case 14:
            head = count(head);
            break;
        case 15:
            head = del(head);
            break;
        default:
            printf("Exit\n");
        }
    } while (option != 16);
    return 0;
}

// Creation

struct node *create(struct node *head)
{
    int choice = 1;
    while (choice != 0)
    {
        printf("Enter data: ");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = ptr = newnode;
        }
        else
        {
            ptr->next = newnode;
            ptr = newnode;
        }
        printf("Do you want to continue (1/0):\n");
        scanf("%d", &choice);
    }
    printf("press 2 to display\n");
    return head;
}

// Display

struct node *display(struct node *head)
{
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n1.Create linked list\n");
    printf("2.Display linked list\n");
    printf("3.Insert_beg\n");
    printf("4.Insert_end\n");
    printf("5.Insert_before\n");
    printf("6.Insert_after\n");
    printf("7.Insert_at_pos\n");
    printf("8.del_beg\n");
    printf("9.del_end\n");
    printf("10.del_before\n");
    printf("11.del_after\n");
    printf("12.del_at_pos\n");
    printf("13.reverse\n");
    printf("14.count\n");
    printf("15.Delete\n");
    printf("16.Exit\n");
    printf("Choose options(1 to 16):\n");
    return head;
}

// Insert_beg

struct node *insert_beg(struct node *head)
{
    printf("Inserting node at begining\n");
    ptr = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = ptr;
    head = newnode;
    printf("press 2 to display\n");
    return head;
}

// Insert_end

struct node *insert_end(struct node *head)
{
    printf("Inserting node at end\n");
    ptr = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    return head;
    printf("press 2 to display\n");
}

// Insert_before

struct node *insert_before(struct node *head)
{
    printf("Inserting node before a node\n");
    int val;
    ptr = head;
    printf("Enter value before which you want to insert a node\n");
    scanf("%d", &val);
    newnode = (struct node *)malloc(sizeof(struct node));
    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    printf("press 2 to display\n");
    return head;
}

// Insert_after

struct node *insert_after(struct node *head)
{
    printf("Inserting node after a node\n");
    int val;
    ptr = head;
    printf("Enter value after which you want to insert a node\n");
    scanf("%d", &val);
    newnode = (struct node *)malloc(sizeof(struct node));
    while (ptr->data != val)
    {
        ptr = ptr->next;
    }
    preptr = ptr;
    ptr = ptr->next;
    preptr->next = newnode;
    newnode->next = ptr;
    printf("press 2 to display");
    return head;
}

// Insert_at_pos

struct node *insert_at_pos(struct node *head)
{
    printf("Inserting node at any position\n");
    int i = 1, pos;
    ptr = head;
    printf("Enter position\n");
    scanf("%d", &pos);
    printf("Enter data\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    while (i < pos)
    {
        preptr = ptr;
        ptr = ptr->next;
        i++;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    printf("press 2 to display");
    return head;
}
struct node *del_beg(struct node *head)
{
    printf("Press 2 to display\n");
    ptr = head;
    head = ptr->next;
    free(ptr);
    return head;
}
struct node *del_end(struct node *head)
{

    printf("Press 2 to display\n");
    ptr = head;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return head;
}
struct node *del_before(struct node *head)
{
    int val;
    printf("Delete before:\n");
    ptr = head;
    printf("Enter value before which you want to delete node:\n");
    scanf("%d", &val);
    while (ptr->next->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    printf("press 2 to display\n");
    return head;
}
struct node *del_after(struct node *head)
{
    int val;
    printf("Delete after:\n");
    ptr = head;
    printf("Enter value after which you want to delete node:\n");
    scanf("%d", &val);
    while (ptr->data != val)
    {
        ptr = ptr->next;
    }
    preptr = ptr;
    ptr = ptr->next;
    preptr->next = ptr->next;
    free(ptr);
    printf("press 2 to display\n");
    return head;
}
struct node *del_at_pos(struct node *head)
{
    printf("Deleting node from any position\n");
    int i = 1, pos;
    ptr = head;
    printf("Enter position\n");
    scanf("%d", &pos);
    while (i < pos)
    {
        preptr = ptr;
        ptr = ptr->next;
        i++;
    }
    preptr->next = ptr->next;
    free(ptr);
    printf("press 2 to display");
    return head;
}
struct node *reverse(struct node *head)
{
    struct node *currentnode, *prevnode, *nextnode;
    prevnode = head;
    currentnode = head->next;
    prevnode->next = 0;
    while (currentnode != NULL)
    {
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        // update
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    printf("Press 2 to display\n");
    return head;
}
struct node *count(struct node *head)
{
    int count = 1;
    ptr = head;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    printf("%d", count);
    return head;
}
struct node *del(struct node *head)
{
    free(head);
    printf("linked list Deleted Successfully");
    return head;
}