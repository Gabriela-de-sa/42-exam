/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:26 by gabriela          #+#    #+#             */
/*   Updated: 2023/11/23 17:27:53 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
