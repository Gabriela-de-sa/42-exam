/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:46:36 by gde-sa            #+#    #+#             */
/*   Updated: 2024/03/15 12:28:06 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	printf("%i", res);
	return (res);
}

int	main(void)
{
	unsigned char	n;

	n = '.';
	printf("%i\n", n);
	reverse_bits(n);
}
