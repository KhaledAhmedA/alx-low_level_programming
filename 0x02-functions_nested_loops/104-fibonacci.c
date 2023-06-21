#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i, log1, log2;
	long int num1, num2, box1, box2, ln1, ln2;

	num1 = 0;
	num2 = 1;
	log1 = log2 = 1;
	for (i = 0; i < 98; i++)
	{
		if (log1)
		{
			box1 = num1 + num2;
			printf(", %ld", box1);
			num1 = num2;
			num2 = box1;
		}
		else
		{
			if (log2)
			{
				ln1 = num1 % 1000000000;
				ln2 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				log2 = 0;
			}
			box2 = (ln1 + ln2);
			box1 = num1 + num2 + (box2 / 1000000000);
			printf(", %ld", box1);
			printf("%ld", box2 % 1000000000);
			num1 = num2;
			ln1 = ln2;
			num2 = box1;
			ln2 = (box2 % 1000000000);
		}
		if (((num1 + num2) < 0) && log1 == 1)
			log1 = 0;
	}
	printf("\n");
	return (0);
}
