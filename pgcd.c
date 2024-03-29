#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	resto;
	int	n1;
	int	n2;

	resto = 0;
	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	else if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		while (n2 != 0)
		{
			resto = n1 % n2;
			n1 = n2;
			n2 = resto;
		}
		printf("%i\n", n1);
	}
}
