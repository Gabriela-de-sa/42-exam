/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:18:44 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/08 22:25:09 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	upper(char str)
{
	if (str >= 'a' && str <= 'z')
		ft_putchar(str - 32);
	else
		ft_putchar(str);
}

void	check(char str)
{
	if (str >= 'A' && str <= 'Z')
		ft_putchar(str + 32);
	else
		ft_putchar(str);
}

void	ft_single_letter(char str)
{
	if (str >= 'a' && str <= 'z')
		ft_putchar(str - 32);
	else
		ft_putchar(str);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (argv[i])
		{
			j = 0;
			str = argv[i];
			while (str[j])
			{
				if (str[j + 1] == ' ' || str[j + 1] == '\t')
					ft_single_letter(str[j]);
				else
				{
					if (str[j + 1] != '\0')
						check(str[j]);
					else
						upper(str[j]);
				}
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
