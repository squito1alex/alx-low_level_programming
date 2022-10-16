#include <stdio.h>
#include <unistd.h>
/**
 * main-entry point
 * description: prints the alphabet in lowercase\n
 * return: 0
 */
int main(void)
{
	int gy;

	for(gy = 97; gy < 123; gy++)
	{
		putchar(gy);
	}
	putchar(gy);
	return (0);
}
