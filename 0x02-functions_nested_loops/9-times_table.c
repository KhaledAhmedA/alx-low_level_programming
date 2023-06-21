#include "main.h"
/**
 * times_table - function give 9times table
 * Return: Always 0 (Sucess)
*/
void times_table(void)
{
	int i, j, total;

	for (i = 0; i <= 9; i++)
	{
		printf("\n");
		for (j = 0; j <= 9; j++)
		{
			total = i * j;
			if (total <= 9)
				printf("%d,  ", total);
			else
				printf("%d, ", total);
		}
	}
}
