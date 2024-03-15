/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:44:20 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/27 20:23:42 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_itoa(int n)
{
	char	digit;

	if (n > 9)
		ft_itoa(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (argc == 1)
		write(1, "0", 1);
	else
	{
		count = argc - 1;
		ft_itoa(count);
	}
	write(1, "\n", 1);
}
