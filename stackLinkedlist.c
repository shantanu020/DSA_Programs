#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = 0, *ptr, *newnode;
struct stack *push(struct stack *top);
struct stack *pop(struct stack *top);
void peek(struct stack *top);
void display(struct stack *top);
int main()
{
    int option;
    printf("Choose from menu\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.display\n");
    while (1)
    {
        printf("Choose option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            peek(top);
            break;
        case 4:
            display(top);
            break;
        default:
            exit(1);
        }
    }
    return 0;
}
struct stack *push(struct stack *top)
{
    int data;
    newnode = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
   if (top == 0)
    {
        newnode->next = 0;
        ptr = top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
    return top;
}
struct stack *pop(struct stack *top)
{
    if (top == 0)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        ptr = top;
        top = top->next;
        free(ptr);
    }
    return top;
}
void peek(struct stack *top)
{
    printf("%d\n", top->data);
}
void display(struct stack *top)
{
    ptr = top;
    if (top == 0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        while (ptr != 0)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}