/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/


#include <stdio.h>
#include <unistd.h>

int	putnbr(int n)
{
	char	res;

	if (n > 9)
		n = putnbr(n / 10);
	res = n % 10 + '0';
	write(1, &res, 1);
}

int	main(void)
{
	int	n;

	n = 42;
	putnbr(n);
}
