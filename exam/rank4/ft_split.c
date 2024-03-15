/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:35:45 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/28 16:52:45 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ainda não testei*/

#include <stdlib.h>

int	ft_count_word(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			i++;
			continue ;
		}
		while (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			i++;
		count++;
	}
	return (count);
}

void	*clear_memory(char **split)
{
	int		i;
	char	**temp;

	i = 0;
	temp = split;
	while (temp[i])
		free(temp[i++]);
	free(split);
	return (NULL);
}

char	*put_word(char *str, char **split, int start, int len)
{
	char	*word;
	int		index;

	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (clear_memory(split));
	index = 0;
	while (index < len)
	{
		word[index] = str[start++];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_word(char *str, char **split)
{
	int		i;
	int		index_split;
	int		len;
	int		start;

	i = 0;
	index_split = 0;
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			start = i;
			len = 1;
			while (str[++i] != ' ' && str[i] != '\t' && str[i])
				len++;
			split[index_split++] = put_word(str, split, start, len);
		}
		if (str[i] != '\0')
			i++;
	}
	split[index_split] = NULL;
	return (split);
}

char	**ft_split(char *str)
{
	int		count_words;
	char	**split;

	count_words = ft_count_word(str);
	split = malloc(count_words + 1 * sizeof(char));
	if (split == NULL)
		return (clear_memory(split));
	ft_word(str, split);
	return (split);
}

int	main(void)
{
	char	*str = "gabriela de sa";
	ft_split(str);
}
