/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:41:30 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/20 15:27:40 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

#include <unistd.h>

int	ft_atoi(char *n)
{
	int	i;
	int	signal;
	int	valor;

	signal = 1;
	i = 0;
	valor = 0;
	while (n[i] == ' ' || n[i] == '\t' || n[i] == '\n')
		i++;
	if (n[i] == '+')
		i++;
	if (n[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		valor = valor * 10 + (n[i] - '0');
		i++;
	}
	return (signal * valor);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int				resto;
	char			hex[100];
	unsigned int	n;
	int				i;

	if (argc == 2)
	{
		i = 0;
		n = ft_atoi(argv[1]);
		while (n != 0)
		{
			resto = n % 16;
			if (resto < 10)
				hex[i] = resto + '0';
			else
				hex[i] = resto + 'a' - 10;
			n = n / 16;
			i++;
		}
		i--;
		while (hex[i] > 0)
		{
			write(1, &hex[i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
