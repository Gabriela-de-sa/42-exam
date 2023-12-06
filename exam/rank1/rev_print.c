/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:26 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/05 21:05:19 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_reverse(char *argv)
{
	int	len_word;

	len_word = ft_strlen(argv) - 1;
	while (len_word >= 0)
	{
		ft_putchar(argv[len_word]);
		len_word--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc >= 2)
	{
		while (i > 0)
		{
			ft_reverse(argv[i]);
			if (i < argc - 1)
				ft_putchar(' ');
			argc--;
			i--;
		}
	}
	ft_putchar('\n');
}
