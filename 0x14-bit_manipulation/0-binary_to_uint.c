#include "main.h"

/**
 * binary_to_uint - function convert given base2 to unsigned int
 * @b: given binary num
 * Return: converted num from binary values
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int unum = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		unum = unum * 2 + (*b++ - '0');
	}

	return (unum);
}
