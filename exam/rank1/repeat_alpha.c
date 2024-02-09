/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:56:31 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/09 10:35:23 by gde-sa           ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
}

void	ft_repeat(char *argv)
{
	char	c;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '!' && argv[i] <= '@')
			ft_putchar(argv[i]);
		if (argv[i] >= 'a' && argv[i] <= 'z')
			c = argv[i] - 97;
		if (argv[i] >= 'A' && argv[i] <= 'Z')
			c = argv[i] - 65;
		while (c >= 0)
		{
			ft_putchar(argv[i]);
			c--;
		}
		i++;
	}
}

void	ft_word(char *argv)
{
	if (argv[0] >= 'a' && argv[0] <= 'z' || argv[0] >= 'A' && argv[0] <= 'Z')
		ft_repeat(argv);
	else
		ft_putstr(argv);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 1;
		while (argv[i])
		{
			ft_word(argv[i]);
			if (i < argc - 1)
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
}
