/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:02:32 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/19 13:12:56 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	count = abs(end - start);
	int	*array = (int *) malloc(count * sizeof(int));
	int	i;

	i = 0;
	while (i <= count)
	{
		if (end < start)
		{
			array[i] = end;
			end++;
			i++;
		}
		else
		{
			array[i] = end;
			end--;
			i++;
		}
	}
	return (array);
}

/*int	main(void)
{
	int	start;
	int	end;

	start = 0;
	end = -3;
	ft_rrange(start, end);
}*/
