#include <stdio.h>
#include <stdlib.h>
int push();
int pop();
int display();
#define size 5
int stack[size], top = -1;
int main()
{
    int ch;
    printf("\n1.Push ");
    printf("\n2.Pop ");
    printf("\n3.Display ");
    printf("\n4.Exit ");
    while (1)
    {
        printf("Enter ur choice: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit point\n");
            exit(1);
        default:
            break;
        }
    }

    return 0;
}
int push()
{
    int ele;
    if (top >= size - 1)
    {
        printf("overflow\n");
    }
    else
    {
        printf("Enter the element to be pushed: \n");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
}
int pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d\n", stack[top]);
        top--;
    }
}
int display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (int i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice\n");
    }
    else
    {
        printf("\n The STACK is empty\n");
    }
}
