/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:57:50 by gde-sa            #+#    #+#             */
/*   Updated: 2024/03/15 12:44:18 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

int	max(int *tab, unsigned int len)
{
	int	max;
	unsigned int	i;

	if (len == 0)
		return (0);
	max = tab[0];
	i = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*#include <stdio.h>
int	main(void)
{
	int				tab[] = {2, 1,3,4,5,6,7,8,7, 19};
	unsigned int	len = 8;

	printf("%i", max(tab, len));
}*/
