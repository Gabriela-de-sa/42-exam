/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:14:08 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/19 14:08:48 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	cont;

	if (argc == 3)
	{
		cont = 0;
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					cont = 1;
					break ;
				}
				j++;
			}
			if (cont == 1)
			{
				i++;
				cont = 0;
			}
			else
			{
				write(1, "0", 1);
				return (0);
			}
		}
		write(1, "1", 1);
		return (1);
	}
	write(1, "\n", 1);
}
