#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
int n, i;

i = 0;

while (i < 10)
{
	for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
i++
_putchar('\n');
}
}
