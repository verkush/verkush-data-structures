#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p = (int *)malloc(50 * sizeof(int));
	if(!p)
	{
		printf("Out of memory\n");
		exit(1);
	}

	void free(void *p);

	return 0;
}