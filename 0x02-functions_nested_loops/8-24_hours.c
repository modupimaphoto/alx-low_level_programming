#include "main.h"
/**
 * jack_bauer - check the code.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(minute / 10 + '0');
			putchar(minute % 10 + '0');
			putchar('\n');
		}
	}
}
