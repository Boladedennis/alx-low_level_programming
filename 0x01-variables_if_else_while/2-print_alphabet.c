#include <stdio.h>
/**
 * main - Entry point
 * Description: printing lowercase alphabetics
 * Return: 0
 */
int main(void)
{	int ch = 'a';
	while (ch <= 'z')
	{ putchar(ch);
	  ch++;
	}
	putchar('\n');
	return (0);
}
