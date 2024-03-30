#include <stdio.h>
#include <cstdint>

int main()
{
	extern uint8_t first, second;
	printf("First num is: %d and Second num is: %d\n", first, second);

	return 0;
}

uint8_t first = 10, second = 30; /*Global variables*/