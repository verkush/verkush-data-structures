#include <stdio.h>
#include <stdlib.h>

/*Define structure for a node*/
struct node 
{
	int data;
	struct node *next;	
};

struct node *head = (node *)malloc(sizeof(struct node));
struct node *middle = (node *)malloc(sizeof(struct node));
struct node *last = (node *)malloc(sizeof(struct node));

void deleteNode(int val);
void printLinkedList(struct node *head);

int main()
{
	head->data = 10;
	middle->data = 20;
	last->data = 30;

	head->next = middle;
	middle->next = last;
	last->next = NULL;

	printLinkedList(head);

	deleteNode(30);

	printLinkedList(head);

	return 0;
}

void deleteNode(int val)
{
	struct node *temp = head;
	if(head->data == val)
	{
		head = head->next;
		free(temp);
	}
	else
	{
		struct node * current = head;
		while(current->next != NULL)
		{
			if(current->next->data == val)
			{
				temp = current->next;
				current->next = current->next->next;
				free(temp);
				break;
			}
			else{
				current = current->next;
			}
		}
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