/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:56:17 by gde-sa            #+#    #+#             */
/*   Updated: 2024/03/15 17:02:54 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	atoi(char *n)
{
	int	i;
	int	signal;
	int	number;

	i = 0;
	signal = 1;
	while (n[i] == ' ' || n[i] == '\t' || n[i] == '\n')
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
		number = number * 10 + (n[i] - '0');
		i++;
	}
	return (signal * number);
}

int	add_prime(int n)
{
	if (n < 2)
		return (0);
	
}

int	main(int argc, char **argv)
{
	int	n;
	int	sum;

	if (argc == 2)
	{
		n = atoi(argv[0]);
		sum = add_prime(n);
	}
	write(1, "\n", 1);
}
