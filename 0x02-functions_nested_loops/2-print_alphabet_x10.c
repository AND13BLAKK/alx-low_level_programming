#include"main.h"

/*
 * main - Entry Point
 *
 * Description;  function that prints ten times the alphabet, in lowercase, followed by a new line.
 *
 * Always 0 (Success)
 */

int  print_alphabet (void)
{
int line, ch;

for(line = 0; line <=9; ++ch)
{
	for(ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
}
