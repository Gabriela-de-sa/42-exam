/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:22:09 by gabriela          #+#    #+#             */
/*   Updated: 2023/12/07 18:50:04 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz'
instead.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int number)
{
	if (number > 9)
		putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			write(1, "fizzbuzz", 9);
			i++;
			ft_putchar('\n');
			continue ;
		}
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			putnbr(i);
		i++;
		ft_putchar('\n');
	}
}
