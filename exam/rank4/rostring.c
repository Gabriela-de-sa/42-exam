/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:20:34 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/29 18:48:43 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

#include <unistd.h>

int	str_len(char *c)
{
	int count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;
	int	flag;
	int	start;
	int	end;
	int	len;

	if (argc > 2)
	{
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else if (argc == 2)
	{
		i = 0;
		len = 0;
		flag = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t' && argv[1][i])
			i++;
		start = i;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			i++;
		end = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t' && argv[1][i])
			i++;
		len = str_len(argv[1]);
		len--;
		while (len >= 0 && argv[1][len] == ' ' || argv[1][i] == '\t')
			len--;
		while (i <= len)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				while (argv[1][i] == ' ' && argv[1][i+1] == ' ' || argv[1][i] == '\t' && argv[1][i+1] == '\t')
					i++;
				if (argv[1][i] == ' ' || argv[1][i] == '\t')
					flag = 1;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
		if (flag == 1)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}
