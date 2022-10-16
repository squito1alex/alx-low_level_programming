#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: 0
 */
int main(void)
{
	int gy;

	for (gy = 97; gy < 123; gy++)
	{
		putchar(gy);
	}
	putchar(gy);
	return (0);
}
