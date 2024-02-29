/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:37:16 by gabriela          #+#    #+#             */
/*   Updated: 2024/02/29 18:29:45 by gabriela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
obs: tenho que refator pois esse codigo funciona, mas está com gambiarra
*/

#include <unistd.h>

void	upper(char str)
{
	char	c;

	c = str - 32;
	write(1, &c, 1);
}

void	lower(char str)
{
	char	c;

	c = str + 32;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			// tem mais de 1 argumento
			while (argv[i][j])
			{
				// se for a primeira letra e depois for espaco ou tab entra
				if (j == 0 && argv[i][0 + 1] == ' ' || argv[i][0 + 1] == '\t')
				{
					// se a letra estiver no intervalo entre a e z, se n somente escreve
					if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
						upper(argv[i][0]);
					else
						write(1, &argv[i][0], 1);
				}
				// se for a primeira letra mas for uma palavra
				else if (j == 0 && argv[i][0 + 1] != ' ' && argv[i][0 + 1] != '\t')
				{
					// se a letra estiver entre a e z, se nao somente escreve
					if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
						upper(argv[i][0]);
					else
						write(1, &argv[i][0], 1);
				}
				else
				{
					// se antes for espaco ou tab e depois for diferente de tab ou espaco, 
					// significa que é uma palavra
					if (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t' && \
						argv[i][j + 1] != ' ' && argv[i][j + 1] != '\t')
					{
						if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
							upper(argv[i][j]);
						else
							write(1, &argv[i][j], 1);
					}
					else
					{
						// o else é quando é depois da primeira letra na palavra e tenho que tratar
						// se tiver maiuscula colocar em minuscula
						if (argv[i][j - 1] != ' ' || argv[i][j - 1] != '\t')
						{
							if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
								lower(argv[i][j]);
							else
								write(1, &argv[i][j], 1);
						}
					}
				}
				j++;
			}
			// no final de cada argumento colocar uma quebra de linha
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
