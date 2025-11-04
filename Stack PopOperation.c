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

void pop()
{
	if(top==-1)
	printf("Stack Underflow! Cannot pop element from stack.");
	
	else
	{
		int item=stack[top];
		top--;
		printf("%d poped from stack.\n\n",item);
	}
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
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
	int item;
    push(10);
    push(20);
    push(30);
    printStack();
    printf("\n");
    
    pop();
    printf("After pop, ");
	printStack();
	
    return 0;
}

