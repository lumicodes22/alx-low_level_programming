#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '8'; n++)
	{
		for (n = '0'; m <= '8'; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);

				if (n != '7' || (n == '7' && i != '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
