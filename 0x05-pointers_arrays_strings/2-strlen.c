#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @s: String pointer to the string whose length is to be found.
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
	/*increments upto when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
