#include <stdio.h>
#include <stdlib.h>

/*Define a structure of doubly Linked List*/
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head = (node *)malloc(sizeof(struct node));
struct node *middle = (node *)malloc(sizeof(struct node));
struct node *last = (node *)malloc(sizeof(struct node));

void printLinkedList_Fw(struct node *head); //Print Linked List in Forward
void printLinkedList_Bw(struct node *last); //Print Linked List in Backward

int main()
{

	head->data = 10;
	middle->data = 20;
	last->data = 30;

	head->prev = NULL;
	head->next = middle;
	middle->prev = head;
	middle->next = last;
	last->prev = middle;
	last->next = NULL;

	printLinkedList_Fw(head);

	printLinkedList_Bw(last);

	return 0;
}

void printLinkedList_Fw(struct node *head)
{
	struct node * temp = head;
	printf("Forward Traversal\n");

	while(temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

void printLinkedList_Bw(struct node *last)
{
	struct node * temp = last;
	printf("Backward Traversal\n");

	while(temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->prev;
	}
	printf("NULL\n");
}