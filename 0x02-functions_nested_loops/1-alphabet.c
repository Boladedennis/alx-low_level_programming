#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: printing alphabet
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
