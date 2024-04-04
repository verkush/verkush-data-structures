#include <stdio.h>

void swap(int *num1, int * num2);

int main()
{
	int num1, num2;
	printf("Enter 'number 1' and 'number 2': ");
	scanf("%d%d",&num1, &num2);

	printf("Before Swap Number 1 = %d and Number 2 = %d \n", num1, num2);

	swap(&num1, &num2);

	printf("After Swap Number 1 = %d and Number 2 = %d \n", num1, num2);
	return 0;
}

/*Function to swap 2 numbers by using Call by Reference*/
void swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp; 
}