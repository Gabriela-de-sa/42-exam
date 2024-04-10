/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:56:31 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/14 12:20:58 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lower(char str)
{
	int	i;

	i = str - 97;
	while (i >= 0)
	{
		ft_putchar(str);
		i--;
	}
}

void	upper(char str)
{
	int	i;

	i = str - 65;
	while (i >= 0)
	{
		ft_putchar(str);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] > 'a' && str[i] <= 'z')
				lower(str[i]);
			else if (str[i] > 'A' && str[i] <= 'Z')
				upper(str[i]);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
}
