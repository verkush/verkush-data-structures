#include <stdio.h>

int main()
{
	int x[10], i;

	/* Insert elements in array */
	for(i = 0; i < 10; i++)
	{
		x[i] = i;
	}

	/* Print array elements */
	for(i = 0; i < 10; i++)
	{
		printf("X[%i] = %d\n", i, x[i]);
	}

	return 0;
}