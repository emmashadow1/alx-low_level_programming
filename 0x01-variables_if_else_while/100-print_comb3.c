#include <stdio.h>

/**
* main-print single digit number starting from 0
*Return: 0
*/
int main(void)
{
int a, b;

for (a = 48; a <=57; a++)
{
	for (b = 49; b <= 57; b++)
	{
		if ( a != b && b > a)
		{
			putchar(a);
			putchar(b);
			putchar(',');
		}
	}
}
putchar('\n');
return (0);
}
