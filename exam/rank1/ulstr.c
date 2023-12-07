/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:27:45 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/07 19:44:05 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *argv)
{
	int		i;
	char	c;

	i = 0;
	while (argv[i])
	{
		c = argv[i];
		if (argv[i] >= 'a' && argv[i] <= 'z')
			ft_putchar(c - 32);
		else if (argv[i] >= 'A' && argv[i] <= 'Z')
			ft_putchar(c + 32);
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
			ulstr(argv[i]);
			if (i < argc - 1)
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
}
