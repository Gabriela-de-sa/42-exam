/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:50:54 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/07 20:20:48 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lower_letter(char argv)
{
	int		count;

	count = argv - 'a';
	ft_putchar(122 - count);
}

void	upper_letter(char argv)
{
	int		count;

	count = argv - 'A';
	ft_putchar(90 - count);
}

void	alpha_mirror(char *argv)
{
	int		i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
			lower_letter(argv[i]);
		else if (argv[i] >= 'A' && argv[i] <= 'Z')
			upper_letter(argv[i]);
		else
			ft_putchar(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			alpha_mirror(argv[i]);
			if (i < argc -1)
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
}
