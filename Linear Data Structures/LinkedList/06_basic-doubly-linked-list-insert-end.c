#include <stdio.h>
#include <stdlib.h>

/*Define a structure for creating a node*/
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head = NULL;

void AddLastNode(int val);
void printLinkedList(struct node *head);

int main()
{
	AddLastNode(10);
	printLinkedList(head);

	AddLastNode(20);
	AddLastNode(30);
	printLinkedList(head);
	return 0;

}

void AddLastNode(int val)
{
	struct node *newNode = (node *)malloc(sizeof(struct node));
	newNode->data = val;

	if(head == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		head = newNode;
	}
	else
	{
		struct node *last = head;
		while(last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
		newNode->prev = last;
		newNode->next = NULL;
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