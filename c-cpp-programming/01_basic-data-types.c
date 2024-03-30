#include <stdio.h>
#include <stdint.h>

int main()
{
    char a = 'a';
    printf("Size of char is : %lld bytes\n", sizeof(a));

    int x = 1;
    printf("Size of integer is : %lld bytes \n", sizeof(x));

    uint8_t c = 10;
    printf("Size of unsigned int(8) is : %lld bytes \n", sizeof(c));

    uint16_t b = 10;
    printf("Size of unsigned int(16) is : %lld bytes \n", sizeof(b));

    float y = 1.1f;
    printf("Size of float is : %lld bytes \n", sizeof(y));

    double w = 10.11;
    printf("Size of double is : %lld bytes \n", sizeof(w));

    return 0;

}