#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return: 0 (success)
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');
	return (0);
}
