#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int gy;

	for (gy = 97; gy < 123; gy++)
	{
		if(gy != 101 && gy != 71)
		{
			putchar(gy);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
