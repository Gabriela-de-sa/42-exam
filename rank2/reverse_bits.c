/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:46:36 by gde-sa            #+#    #+#             */
/*   Updated: 2024/03/18 12:37:00 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return (res);
}

int	main(void)
{
	unsigned char	n;

	n = '.';
	printf("%i\n", n);
	reverse_bits(n);
}
