#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1; // Error: Index out of range

    unsigned long int mask = 1UL << index;
    return (n & mask) ? 1 : 0;
}

int main(void)
{
    unsigned long int num = 42; // Replace with your number
    unsigned int bitIndex = 3;  // Replace with your index

    int bitValue = get_bit(num, bitIndex);

    if (bitValue != -1)
        printf("Bit at index %u is: %d\n", bitIndex, bitValue);
    else
        printf("Error: Index out of range\n");

    return 0;
}
