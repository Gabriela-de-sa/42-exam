/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 11:55:59 by gde-sa            #+#    #+#             */
/*   Updated: 2024/03/14 15:45:12 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
*/

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	unsigned int	i;

	i = 8;
	while (i--)
	{
		bit = ((octet >> i & 1) + '0');
		write(1, &bit, 1);
	}
}

/*int	main(void)
{
	unsigned char	n;

	n = 72;
	print_bits(n);
}*/
