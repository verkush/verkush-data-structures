#include <stdio.h>

/*function to print numbers n to 1*/
void fun1(int n)
{
	if(n > 0)
	{
		printf("%d ", n);
		fun1(n - 1);
	}
}

/*function to print numbers 1 to n*/
void fun2(int n)
{
	if(n > 0)
	{
		fun2(n - 1);
		printf("%d ", n);
	}
}

int main()
{
	int n = 3;
	printf("Numbers (fun1)\n");
	fun1(n);
	printf("\nNumbers (fun2)\n");
	fun2(n);
	
	return 0;
}