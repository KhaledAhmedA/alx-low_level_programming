#include <stdio.h>
/**
 * calclength - outer function to calc number length
 * @num: argument of calc function
 * Return: numbers
*/
int calclength(int num)
{
	int l = 0;

	if (!l)
		return (l);
	while (num)
	{
		num = num / 10;
		l += 1;
	}
	return (l);
}
/**
 * main -Entry point
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i, init;
	unsigned long num1, num2, box1, box2, div, ln1, ln2;

	num1 = 1;
	num2 = 2;
	div = 100000000;
	ln1 = 0;
	ln2 = 0;
	box2 = 0;

	for (i = 1; 1 <= 98; i++)
	{
		if (ln1 > 0)
			printf("%lu", ln1);
		init = calclength(div) - 1 - calclength(num1);
		while (ln1 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", num1);

		box1 = (num1 + num2) % div;
		box2 = ln1 + ln2 + (num1 + num2) / div;
		num1 = num2;
		ln1 = ln2;
		num2 = box1;
		ln2 = box2;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
