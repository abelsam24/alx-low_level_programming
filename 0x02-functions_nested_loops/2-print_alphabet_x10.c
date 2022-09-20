#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 times the alphabet, in lowercase.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
		char ch, i;

		for (i = 0; i <= 9; i++)
		{
			for (ch = 'a'; ch <= 'z'; ch++)
			{
			_putchar(ch);
			}
			_putchar('\n');
		}
}
