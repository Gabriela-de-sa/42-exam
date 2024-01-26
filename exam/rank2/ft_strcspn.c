/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:04:19 by gabriela          #+#    #+#             */
/*   Updated: 2024/01/26 15:55:11 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
strcspn = retona o len da string que nao esta contida no reject
		  se a string s chegar ao '\0' retorna o len da string s inteira
ex: s = gabi123
	reject = 123
	retorno = 4

ex: s = gabi123
	reject = ""
	retorno = 7
*/
#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (s[i] != reject[0])
	{
		count++;
		i++;
	}
	if (s[i] == '\0')
		return (ft_strlen(s));
	return (count);
}

/*int main(void)
{
	char	str1[] = "gabi123";
	char	str2[] = "";

	printf("%li\n", strcspn(str1, str2));
	printf("%li", ft_strcspn(str1, str2));
}*/
