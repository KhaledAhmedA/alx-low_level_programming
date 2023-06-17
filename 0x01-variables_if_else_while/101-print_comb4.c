#include <stdio.h>
/**
 * main - Entry point
 * counted and seperated three digits
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int x, y, z;

	x = 48;
	y = 48;
	z = 48;

	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			z = 48;
			while (z < 58)
			{
				if (y != x && y != z && x != z && y < x && x < z)
				{
					putchar(y);
					putchar(x);
					putchar(z);
					if (x == 56 && y == 55 && z == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}

