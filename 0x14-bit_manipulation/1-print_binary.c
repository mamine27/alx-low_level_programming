#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);

    putchar((n & 1) + '0');
}

int main(void)
{
    unsigned long int num = 98; // Replace with your number
    print_binary(num);
    putchar('\n');
    return (0);
}
