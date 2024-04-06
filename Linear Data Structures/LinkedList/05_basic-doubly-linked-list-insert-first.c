#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head = NULL;

void addNodeFirst(int val);
void printLinkedList_Fw(struct node *head);
void printLinkedList_Bw(struct node *last);

int main()
{
	addNodeFirst(10);
	addNodeFirst(20);
	addNodeFirst(30);
	printLinkedList_Fw(head);
	return 0;
}

void addNodeFirst(int val)
{
	struct node *newNode = (node *)malloc(sizeof(struct node));
	newNode->data = val;

	if(head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		head = newNode;
	}
	else
	{
		newNode->prev = NULL;
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
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
