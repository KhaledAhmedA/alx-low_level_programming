#include <stdio.h>
/**
 * main - Entry point
 * two two digits number
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int w, x, y, z, dg1, dg2;
w = x = y = z = 48;
while (z < 58)
{
	y = 48;
	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			w = 48;
			while (w < 58)
			{
				dg1 = (h * 10) + g;
				gd2 = (e * 10) + i;
				if (dg1 < dg2)
				{
					putchar(z);
					putchar(y);
					putchar(' ');
					putchar(x);
					putchar(w);
					if (z == 57 && y == 56 && x == 57 && w == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				w++;
			}
			x++;
		}
		y++;
	}
	z++;
}
putchar('\n');
return (0);
}
