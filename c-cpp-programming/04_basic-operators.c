#include <stdio.h>

int main()
{

	int target, source;
	int *m;

	source = 10;
	printf("Source = %d\n", source);
	m = &source;
	target = *m;

	printf("Target = %d\n", target);

	return 0;

}