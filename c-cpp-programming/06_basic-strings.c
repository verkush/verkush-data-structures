#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "hello world";
	char str2[20];
	/* String length */
	printf("Length of string 1 = %d\n", strlen(str1));
	printf("Length of string 2 = %d\n", strlen(str2));

	strcpy(str2, "Welcome!");

	printf("String 2 = %s\n", str2);
	printf("Length of string 2 = %d\n", strlen(str2));
	/* String compare */
	int compare = strcmp(str1, str2);
	printf("Compare string %d\n", compare);
	/* String copy */
	char str3[40];
	strcpy(str3, str2);
	printf("String 3 = %s\n", str3);
	/* String concatenation */
	strcat(str1, str2);
	printf("New String after concatenation = %s\n", str1);
	/* String return first occurence of character */
	printf(strchr(str1, 'e'));
	printf("\n");
	/* String return first occurence */
	printf(strstr(str2, "lc"));

	return 0;
}