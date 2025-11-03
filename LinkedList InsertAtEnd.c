#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head_ref, int new_data) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = NULL;

    // Check if linked list is empty, the new node becomes the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // traverse the Linked list
    struct Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    //  last node point to the new node
    temp->next = new_node;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert elements at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    printf("Linked list after insertion at end: ");
    printList(head);

    return 0;
}
