/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:05:15 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/06 22:24:58 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
*/

int	is_power_of_2(unsigned int n)
{
	unsigned int	resto;

	resto = 0;
	while (n2 != 0)
	{
		resto = n1 % n2;
		n2 = resto
		n1 = n2;
	}
	return (n1);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	n;

	printf("%i", is_power_of_2(2));
}
