#include "main.h"
/**
 * print_alphabet to print lowercase alphabet
 * 
 * Return: Always 0 (Sucess)
*/
void print_alphabet(void){
	int alpha;
	
	for (alpha='a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
