/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:47:54 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/27 11:58:51 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int	len = 0;
	int	n = nbr;
	char	*str;

	// verifico se o numero é o menor int
	if (nbr == -2147483648)
		return ("-2147483648\0");
	// se o numero for negativo eu acrescento len++ para contar mas um espaco no malloc
	if (nbr < 0)
		len++;
	// uso a var temporaria para contar quantos digitos tem o numero. Uso a divisao por 10
	while (n)
	{
		n /= 10;
		len++;
	}
	// aloco a memoria para a string usando tamho de len + 1 para o '\0'
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	// coloco o '\0' no fim de len
	str[len] = '\0';
	// if o numero for negativo eu coloco o sinal de - na primeira posicao 
	// e transformo o numero em positivo
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	// se o numero for 0 eu coloco na primeir posicao e retorno str
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	// se o numero nao for zero, coloco o modulo do numero de tras para frente e divido o numero
	while (nbr)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	int	n = 100;
	printf("%s", ft_itoa(n));
}