#include "main.h"
/**
 * main - print_alphabet in lowercase
 * new line
 */

void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
