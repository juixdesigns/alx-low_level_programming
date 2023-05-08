#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	while (i < 26)
	{
		putchar('a' + i);
		i++;
	}
	putchar('\n');

	return (0);
}
