#include "main.h"

/**
 * print_square - prints a square made of '#' characters in the terminal.
 * @size: The size of the square.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, column;

for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
