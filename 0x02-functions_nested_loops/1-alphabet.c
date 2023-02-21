#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
*/

void print_alphabet(void)
{
   int start = 97;

   while (start <= 122) {
	_putchar(start++);
   }
   _putchar(10);
}
