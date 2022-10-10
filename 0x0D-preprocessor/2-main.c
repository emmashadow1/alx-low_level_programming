#include <stdio.h>
/**
 * main - Program compilation starts from the main
 * Description: this program prints the name of the file it was compiled from
 * Return: 0 (success)
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
