#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int v;

	/*finds the length of string without null character*/
	for (v = 0; s[v] != '\0'; ++v)
		;

	/*print char from the last v as you decrement*/
	for (--v; v >= 0; --v)
		_putchar(s[v]);
	_putchar('\n');
}
