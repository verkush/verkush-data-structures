#include <stdio.h>

int count = 1; /*Global variable count*/

void fun1(void);
void fun2(void);

int main()
{
    count = 10;
    printf("Count value of main = %d\n", count);
    fun1();
}

void fun1(void)
{
    int temp = 0;

    temp = count + 1;
    printf("Count value of fun1 = %d\n", temp);
    fun2();
}

void fun2(void) 
{
    count++;
    printf("Count value of fun2 = %d\n", count);
}