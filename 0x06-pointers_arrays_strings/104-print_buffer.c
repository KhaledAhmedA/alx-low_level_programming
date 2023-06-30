#include "main.h"
/**
 * print_buffer - a function return buffer
 * @b: buffer
 * @size: buffer size
 * Return: return no value
*/
void print_buffer(char *b, int size)
{
	int i, n, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (n = i; n < i + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x", *(b + n));
				else
					printf("  ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
