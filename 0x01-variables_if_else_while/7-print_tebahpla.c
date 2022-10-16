#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int k;

	for (k = 122; k = 97; k--)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
