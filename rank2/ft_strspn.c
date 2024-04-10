/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:51:35 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/14 13:21:00 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
retorna o len de s contido em accept
no ex da main o retorno vai ser 3
*/

#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == accept[i])
	{
		count++;
		i++;
	}
	return (count);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s[] = "gabi";
	char	accept[] = "gab";

	printf("%li", strspn(s, accept));
	printf("\n%li", ft_strspn(s, accept));
}*/
