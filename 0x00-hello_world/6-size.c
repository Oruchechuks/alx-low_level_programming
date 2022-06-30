#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
puts("Size of a character: %d bite(s)\n", sizeof(char));
puts("Size of an int: %d bite(s)\n", sizeof(int));
puts("Size of a long int: %d bites(s)\n", sizeof(long int));
puts("Size of a long long int: %d bite(s)\n", sizeof(long long int));
puts("Size of a float: %d bite(s)\n", sizeof(float));
return (0);
}
