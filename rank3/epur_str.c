/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:37:06 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/19 11:10:39 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/

#include <unistd.h>

int	ftstrlen(char *c)
{
	int	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	int		len;

	len = 0;
	str = argv[1];
	if (argc == 2)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\t' && str[i])
			i++;
		len = ftstrlen(str);
		len--;
		while (len >= 0 && str[len] == ' ' || str[len] == '\t')
			len--;
		if (len > 0)
		{
			while (i <= len)
			{
				if (str[i] == ' ' || str[i] == '\t')
				{
					while (str[i] == ' ' || str[i] == '\t')
						i++;
					write(1, " ", 1);
				}
				else
				{
					write(1, &str[i], 1);
					i++;
				}
			}
		}
	}
	write(1, "\n", 1);
}
