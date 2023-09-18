#include "main.h"
#include <stdio.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int x = sizeof(*s) - 1;

	while (*(s + x) != '\0')
	{
		_putchar(*(s + x--));
	}
	_putchar('\n');
}
