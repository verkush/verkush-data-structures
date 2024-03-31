#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

void push(int val);
int pop(void);

int *tos, *p1, stack[SIZE];

int main()
{
	int val;

	tos = stack; /* tos points to top of stack*/
	p1 = stack; /*initialize p1*/

	do
	{
		printf("Enter value: ");
		scanf("%d", &val);
		if(val != 0) 
		{
			push(val);
		}
		else
		{
			printf("Value on top is %d\n", pop());
		}
	} while(val != -1);

	return 0;
}

/*Function to push an item to stack*/
void push(int val)
{
	p1++;
	if(p1 == (tos + SIZE))
	{
		printf("Stack Overflow \n");
		exit(1);
	}
	*p1 = val;
}

/*Function to pop an item from stack*/
int pop(void)
{
	if(p1 == tos)
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	p1--;
	return *(p1 + 1);
}