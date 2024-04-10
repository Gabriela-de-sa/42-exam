/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:48:33 by gabriela          #+#    #+#             */
/*   Updated: 2024/01/26 12:58:28 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	camel_to_snake(char *argv, char *word)
{
	int		i;
	int		index_word;

	i = 0;
	index_word = 0;

	while (argv[i])
	{
		if (argv[i] >= 'A' && argv[i] <= 'Z' && i != 0)
		{
			word[index_word++] = '_';
			word[index_word++] = argv[i] + 32;
		}
		else
			word[index_word++] = argv[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*word;
	int		i;
	int		count_upper;

	i = 0;
	count_upper = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count_upper++;
			i++;
		}
		word = malloc(count_upper + i);
		camel_to_snake(argv[1], word);
		putstr(word);
	}
	ft_putchar('\n');
}
