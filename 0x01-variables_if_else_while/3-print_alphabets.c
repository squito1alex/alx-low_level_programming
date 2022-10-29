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

	for (gy = 'a'; gy <= 'z'; gy++)
	{
		putchar(gy);
	}
	for (gy = 'A'; gy <= 'Z'; gy++)
	{
		putchar(gy);
	}
	putchar(gy);
	return (0);
}
