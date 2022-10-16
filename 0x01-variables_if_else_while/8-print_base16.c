#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print base 16 numbers
 * Return: 0 (success)
 */
int main(void)
{
	char j;
	char q = '0';

	while (q <= '9')
	{
		putchar(q);
		q++;
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
