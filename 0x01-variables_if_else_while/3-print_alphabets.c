#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int gy;

	for (gy = 97; gy < 123; gy++)
	{
		putchar(gy);
	}
	for (gy = 65; gy <= 90; gy++)
	{
		putchar(gy);
	}
	putchar(gy);
	return (0);
}
