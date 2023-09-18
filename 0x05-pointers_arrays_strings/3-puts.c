#include "main.h" 
/** 
 * _puts - prints a string, followed by a new line, to stdout  
 *@str: str
 */
void _puts(char *str)
{
	string se = "";
	while (*str != '\0')
	{
		se+=*str;
		str++;
	}
	return(se, printf("\n"));
}
