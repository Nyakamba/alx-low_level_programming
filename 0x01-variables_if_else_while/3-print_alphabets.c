#include <stdio.h>
/**
* main - Entry
*
* Return: Always 0 (success/correct)
*/
int main(void)

{
	char lower_case;
	char upper_case;

	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
        {
	        putchar(lower_case);
        }

	put('\n');

	return (0);
}


