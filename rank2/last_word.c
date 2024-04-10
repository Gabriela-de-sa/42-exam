/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:42:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/18 12:21:16 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

int	ftstrlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc == 2)
	{
		len = 0;
		len = ftstrlen(argv[1]);
		len--;
		while (len >= 0 && argv[1][len] == ' ' || argv[1][len] == '\t' )
			len--;
		i = len;
		while (len >= 0 && argv[1][len] != ' ' && argv[1][len] != '\t')
			len--;
		len++;
		if (len >= 0)
		{
			while (len <= i)
			{
				write(1, &argv[1][len], 1);
				len++;
			}
		}
	}
	write(1, "\n", 1);
}
