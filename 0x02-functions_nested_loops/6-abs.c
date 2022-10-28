#include "main.h"

/**
 * _abs - computes the abs value of an int
 * @n: the int in question
 * Return: the abs of the int.
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
