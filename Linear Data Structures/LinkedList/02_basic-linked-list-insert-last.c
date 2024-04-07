#include <stdio.h>
#include <stdlib.h>

/*Define a structure node */
struct node
{
	int data;
	struct node *next;
};

struct node *head = NULL;

/*Function to insert a node at the end of linked list*/
void AddLastNode(int val);
void printLinkedList(struct node *head);

int main()
{	
	AddLastNode(5);
	AddLastNode(10);
	AddLastNode(20);
	printLinkedList(head);

	return 0;
}

void AddLastNode(int val)
{
	struct node *newNode = (node *)malloc(sizeof(struct node));
	newNode->data = val;
	newNode->next = NULL;

	if(head == NULL)
	{
		head = newNode;
	}
	else
	{
		struct node *temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printLinkedList(struct node *head)
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}