#include "main.h"
/**
 * swap_int - function swap two given intergs
 * @a: first param
 * @b: second param
 * @temp: used to store value while exchange
 * Return: Always 0 (Sucess)
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
