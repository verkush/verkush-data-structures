#include <stdio.h>
#include <Stdlib.h>

/*Define structure for a Node*/
struct Node 
{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

/*Function to insert a node in starting of linked list*/
void addNode(int val);
/*Function to print Linked List*/
void printLinkedList(struct Node *head);

int main()
{
	addNode(10);
	addNode(20);
	addNode(30);

	printLinkedList(head);

	return 0;
}


void addNode(int val)
{
	struct Node *newNode = (Node *)malloc(sizeof(struct Node));
	newNode->data = val;
	newNode->next = head;
	head = newNode;
}

void printLinkedList(struct Node *head)
{
	struct Node *temp = head;

	while(temp != NULL)
	{
		printf("%d->",temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}