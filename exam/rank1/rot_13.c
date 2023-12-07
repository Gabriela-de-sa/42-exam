/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:49:35 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/07 19:09:17 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lower_letter(char c)
{
	int		count;

	count = 0;
	while (count < 13)
	{
		if (count < 13 && c == 122)
		{
			c = 'a';
			count++;
			continue ;
		}
		c += 1;
		count++;
	}
	ft_putchar(c);
}

void	upper_letter(char c)
{
	int		count;

	count = 0;
	while (count < 13)
	{
		if (count < 13 && c == 90)
		{
			c = 'A';
			count++;
			continue ;
		}
		c += 1;
		count++;
	}
	ft_putchar(c);
}

void	rot_13(char *argv)
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
			rot_13(argv[i]);
			if (i < argc - 1)
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
}
