#include <stdio.h>
#include <stdlib.h> 

struct Node {
    int data;          
    struct Node* next; 
};

void insertAtBeginning(struct Node** head_ref, int newdata) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    new_node->data = newdata;
    new_node->next = (*head_ref);

    // head point to the new node
    (*head_ref) = new_node;
}

void printList(struct Node* temp) 
{
    while (temp != NULL)
	{
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() 
{
    struct Node* head = NULL;

    // Insert elements at the beginning
    insertAtBeginning(&head, 10); 
    insertAtBeginning(&head, 20); 
    insertAtBeginning(&head, 30);

    printf("Linked list after insertion at beginning:\n");
    printList(head);

    return 0;
}
