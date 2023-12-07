/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:00:29 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/07 19:09:12 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lower_letter(char argv)
{
	if (argv == 'z')
		argv = 'a';
	else
		argv += 1;
	ft_putchar(argv);
}

void	upper_letter(char argv)
{
	if (argv == 'Z')
		argv = 'A';
	else
		argv += 1;
	ft_putchar(argv);
}

void	rotone(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= 97 && argv[i] <= 122)
			lower_letter(argv[i]);
		else if (argv[i] >= 65 && argv[i] <= 90)
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
			rotone(argv[i]);
			if (i < argc - 1)
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
}
