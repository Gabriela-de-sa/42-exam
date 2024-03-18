/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:31:53 by gabriela          #+#    #+#             */
/*   Updated: 2024/03/18 13:04:54 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
$>
*/

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	resto;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		while (n2 != 0)
		{
			resto = n1 % n2;
			n1 = n2;
			n2 = resto;
		}
		printf("%i", n1);
	}
	printf("\n");
}
