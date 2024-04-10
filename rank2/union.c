/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:56:18 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/29 13:55:19 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

int	check(char *word, char str)
{
	int	i;
	int	j;

	i = 0;
	while (word[i])
	{
		if (word[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	word[255];
	int		re;

	re = 0;
	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			re = check(word, argv[1][i]);
			if (re == 0)
			{
				word[j] = argv[1][i];
				j++;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			re = check(word, argv[2][i]);
			if (re == 0)
			{
				word[j] = argv[2][i];
				j++;
			}
			i++;
		}
		word[j + 1] = '\0';
		i = 0;
		while (word[i])
		{
			write(1, &word[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
