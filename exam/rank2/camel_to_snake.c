/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:48:33 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/11 22:10:15 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	if (argc >= 2)
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
