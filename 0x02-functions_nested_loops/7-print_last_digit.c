#include "main.h"

/**
 * print_last_digit - prints last digit
 * @num: integer to be tested
 * Return: 0
 */
int print_last_digit(int num){
     int last_digit;
     last_digit = num % 10;
     if (last_digit < 0)
	last_digit *= -1;

     _putchar(last_digit + '0');
     return (last_digit);
}
