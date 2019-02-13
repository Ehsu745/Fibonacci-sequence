#include <stdio.h>

int		main ()
{
	int i = 0, j = 1, x;
	for(x = 0; x < 10; x++)
	{
		if (i < j)
		{
			printf("%i ", i);
			i = i + j;
		}
		else
		{
			printf("%i ", j);
			j = i + j;
		}
	}
}
