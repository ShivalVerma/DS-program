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
    
    return 0;
}

