/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:37:06 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/16 15:46:40 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
