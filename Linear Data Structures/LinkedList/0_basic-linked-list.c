#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
} *head, *middle, *last;



int main()
{
	head = (node *)malloc(sizeof(struct node));
	middle = (node *)malloc(sizeof(struct node));
	last = (node *)malloc(sizeof(struct node));

	head->data = 10;
	middle->data = 20;
	last->data = 30;

	head->next = middle;
	middle->next = last;
	last->next = NULL;

	struct node *temp = head;

	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}


	return 0;
}