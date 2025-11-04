#include <stdio.h>
#define MAX 5  

int top = -1;
int stack[MAX];

void push(int n)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow! You cannot push %d into the stack.\n", n);
    }
    else
    {
        top = top + 1;
        stack[top] = n;
    }
}

int peek() 
{
    if (top==-1) 
	{
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top]; 
}

void printStack()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements:\n");
        int i;
        for ( i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    printStack();

    
    int ele = peek();
    printf("Top element (peek): %d\n", ele); 

    return 0;
}

