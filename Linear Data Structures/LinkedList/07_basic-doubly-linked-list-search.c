#include <stdio.h>
#include <stdlib.h>

struct node 
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head = NULL;

void AddNode(int val);
int SearchNode(struct node *head, int val);


int main()
{
	AddNode(10);
	AddNode(20);
	AddNode(30);
	AddNode(40);
	AddNode(50);

	int result = SearchNode(head, 50);
	result == 1 ? printf("Node Found\n") : printf("Node Not Found\n");
	return 0;
}

void AddNode(int val)
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

int SearchNode(struct node *head, int val)
{
	struct node *temp = head;
	while(temp != NULL)
	{
		if(temp->data == val)
		{
			return 1;
		}
		temp = temp->next;
	}
	return -1;
}