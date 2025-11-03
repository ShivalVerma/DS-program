#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() 
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL; 

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node)); 

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30; 
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;

    printf("Initial Linked List: ");
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    int pos;
    printf("Enter the position of node you want to delete (1 as based index): ");
    scanf("%d", &pos);

    struct Node* temp1 = head;
    struct Node* prev = NULL; 
    int i = 1;

    if (pos < 1) {
        printf("Invalid position! Please enter a valid position.\n");
    }
    else 
	{
        // Handle node deletion 
        if (pos == 1) 
		{
            head = temp1->next;
            free(temp1);
        } 
		else 
		{
            // Traverse to the node at position - 1
            while (temp1 != NULL && i < pos) {
                prev = temp1; // Fix 2: Use 'prev'
                temp1 = temp1->next;
                i++;
            }

            // Checking if position was out of bounds
            if (temp1 == NULL) {
                printf("Position %d is out of bounds.\n", pos);
            } 
			else 
			{
                prev->next = temp1->next; // Link previous node to the next node
                free(temp1);              
            }
        }
    }
    
    printf("Updated Linked List:\n");
    temp = head; 
    
    if(temp == NULL)
        printf("Empty List.\n");
    else
    {
        while(temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    
    return 0;
}

