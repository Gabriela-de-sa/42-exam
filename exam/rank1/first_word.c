/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:35:32 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/09 10:35:33 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.
*/

#include <unistd.h>

void	first_word(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
	while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv);
	write(1, "\n", 1);
}
