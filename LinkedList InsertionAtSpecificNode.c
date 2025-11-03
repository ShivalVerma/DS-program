#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

int main()
{
	struct  Node* head=NULL;
	head=(struct Node*)malloc(sizeof(struct Node));
	
	struct  Node* second=NULL;
	second=(struct Node*)malloc(sizeof(struct Node));
	
	struct  Node* third=NULL;
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=30;
	third->next=NULL;
	
	int position=2;
	int newdata=15;
	
	printf("Initial Linked List:\n");  //Printing Linked List before inserting new element
	struct Node* current=head;
	while(current!=NULL)
	{
		printf("%d->",current->data);
		current=current->next;
	}
	printf("NULL\n\n");
	
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));   //new node creation in which we enter element
	if(newNode == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}
	newNode->data=newdata;                       // Entering new data
	struct Node* temp=head;
	
	if(temp==NULL)
	{
		printf("Invalid position\n");
	}
	else
	{
		newNode->next=temp->next;
		temp->next=newNode;
	}
	
	printf("Linked List after Inserting element:\n");   //Printing Linked List after inserting new element
	current=head;
	while(current !=NULL)
	{
		printf("%d->",current->data);
		current=current->next;
	}
	printf("NULL\n");
	
	return 0;
}
