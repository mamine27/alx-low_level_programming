#include "main.h"
#include <string.h>
/** 
 * _puts - prints a string, followed by a new line, to stdout  
 *@str: str
 */
void _puts(char *str)
{
	
	while (*str != '\0')
	{
		printf("%d", *str);;
		str++;
	}
	printf("\n");
}
