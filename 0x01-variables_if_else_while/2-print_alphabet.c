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

	for (gy = 'a'; gy <= 'z'; gy++)
	{
		putchar(gy);
	}
	putchar(gy);
	return (0);
}
