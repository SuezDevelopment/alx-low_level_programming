#include "main.h"

/**
* main - Prints "_putchar" to stdout
*
* Return: 0
*/


int main(void)
{
	char text[10] = "_putchar";

   	int i;
	/*for loop*/
   	for (i = 0; i < 8; i++) {
      		_putchar(text[i]);
   	}
   	_putchar(10);
   	return(0);
}

