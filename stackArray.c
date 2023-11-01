#include <stdio.h>
#include <stdlib.h>
// stack is a data structure that follows LIFO principle
int stack[100], max = 99, top = -1;
int push(int data);
void pop();
void peek();
void display();
int main()
{
    int option, data;
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
            printf("Enter data\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Exit\n");
            exit(1);
        }
    }
}
int push(int data)
{
    if (top == max)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = data;
    }

    return top;
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        top--;
    }
}
void peek()
{
    printf("%d", stack[top]);
    printf("\n");
}
void display()
{
    int i = 0;
    while (i <= top)
    {
        printf("%d ", stack[i]);
        i++;
    }
    printf("\n");
}