#include <stdio.h>

struct struct_type 
{
	int a;
	int b;
	char ch;
};

void fun1(struct struct_type param);

int main()
{
	struct struct_type arg;
	arg.a = 1000;

	fun1(arg);

	return 0;
}

void fun1(struct struct_type param)
{
	printf("%d", param.a);
}