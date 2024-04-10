/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:56:17 by gde-sa            #+#    #+#             */
/*   Updated: 2024/03/16 13:26:24 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *n)
{
	int	number;
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n')
		i++;
	if (n[i] == '+')
		i++;
	if (n[i] == '-')
	{
		signal = -1;
		i++;
	}
	number = 0;
	while (n[i] >= '0' && n[i] <= '9')
	{
		number = number * 10 + n[i] - '0';
		i++;
	}
	return (signal * number);
}

void	putnbr(int n)
{
	char	res;

	if (n > 9)
		putnbr(n / 10);
	res = n % 10 + '0';
	write(1, &res, 1);
}

int	add_prime(int n)
{
	int	div;

	div = 2;
	while (div <= n / 2)
	{
		if (n % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	sum;

	if (argc != 2)
	{
		write(1, "0\n", 1);
		return (0);
	}
	n = ft_atoi(argv[1]);
	if (n < 0)
	{
		write(1, "0\n", 1);
		return (0);
	}
	if (argc == 2)
	{
		sum = 0;
		while (n > 1)
		{
			if (add_prime(n) == 1)
				sum += n;
			n--;
		}
		putnbr(sum);
	}
	write(1, "\n", 1);
}
