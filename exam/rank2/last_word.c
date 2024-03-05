/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:42:17 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/05 20:28:29 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
