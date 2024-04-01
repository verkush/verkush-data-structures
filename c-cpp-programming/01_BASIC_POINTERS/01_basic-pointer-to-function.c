#include <stdio.h>
#include <string.h>

void check(char *a, char *b, int (*cmp)(const char *, const char *));

int main()
{
	char s1[80] = "Hello", s2[80]="Hello";
	int (*p)(const char *, const char *);

	p = strcmp;

	check(s1, s2, p);

	return 0;
}

void check(char *a, char *b, int (*cmp)(const char *, const char *))
{
	printf("Testing for equality\n");
	if(!(*cmp)(a, b))
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Equal\n");
	}
}