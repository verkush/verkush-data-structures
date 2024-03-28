#include <stdio.h>

#define MAX_SIZE 10

int main()
{
    float tempArray[MAX_SIZE];
    int n = 0;
    while(n < 10)
    {
        printf("Enter the temperature of the day %d : ", n + 1);
        scanf("%f", &tempArray[n]);
        ++n;
    }

    n = 0; /*Re-initialize 'n' value*/

    while(n < 10)
    {
        printf("Temperature of day %d = %.2f\n", n + 1, tempArray[n]);
        n++;
    }

    return 0;
}