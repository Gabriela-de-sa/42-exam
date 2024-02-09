/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:34:43 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/06 21:15:36 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *) s1);
			j++;
		}
		i++;
	}
	return ("(null)");
}

/*
#include <stdio.h>
int	main(void)
{
	const char	*s1 = "gabriela";
	const char	*s2 = "";
	printf("\n%s", ft_strpbrk(s1, s2));
	printf("\n%s", strpbrk(s1, s2));
}*/
