#include <stdio.h>
#include <string.h>

int is_in(const char *s, char c) /*Return 1 if c is part of string s; otherwise 0*/
{
	while(*s)
	{
		if(*s == c)
		{
			return 1;
		}
		else
		{
			s++;
		}
	}
	return 0;
}

int main()
{
	const char *s = "hello";
	char c = 'e';

	int result = 0;
	result = is_in(s, c);

	printf("Is it present ? : %d\n", result);

	return 0;
}