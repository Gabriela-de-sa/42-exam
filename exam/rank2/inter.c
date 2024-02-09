/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:17:39 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/06 22:02:37 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	compare(char *word, char s1)
{
	int	i;

	i =  0;
	while (word[i])
	{
		if (word[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		index;
	char	word[256] = "";
	char	*s2;
	char	*s1;

	i = 0;
	index = 0;
	s2 = argv[2];
	s1 = argv[1];
	if (argc == 3)
	{
		while (s1[i])
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					if (compare(word, s1[i]) == 0)
					{
						word[index] = s1[i];
						index++;
					}
				}
				j++;
			}
			i++;
		}
		word[index] = '\0';
		ft_putstr(word);
	}
	write(1, "\n", 1);
}
