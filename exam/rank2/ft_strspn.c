/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:51:35 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/05 22:09:30 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int		i;
	int 	j;
	size_t count;

	count = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s[] = "llaar";
	char	accept[] = "la";

	printf("%li", strspn(s, accept));
	printf("\n%li", ft_strspn(s, accept));
}*/
