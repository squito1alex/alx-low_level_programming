#include <stdio.h>
#include <unistd.h>
/**
 * main-entry point
 * description: prints alphabet in lowercase then uppercase
 * return: 0 (success)
 */
int main(void)
{
	int gy;
	for(gy = 97; gy < 123; gy++)
	{
		putchar(gy);
	}
	for(gy = 65; gy < 91; gy++)
	{
		putchar(gy);
	}
	putchar(gy);
	return (0);
}
