/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:04:22 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/19 12:56:51 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	count = abs(end - start);
	int	*array = (int *) malloc((count) * sizeof(int));
	int	i;

	i = 0;
	while (i <= count)
	{
		if (start < end)
		{
			array[i] = start;
			start++;
			i++;
		}
		else
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}

/*int	main(void)
{
	int	start;
	int	end;

	start = -1;
	end = -10;
	ft_range(start, end);
}*/
