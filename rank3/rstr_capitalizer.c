/*
Assignment name  : rstr_capitalizer
Expected files   : rstr_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of the
string. If a word has a single letter, it must be capitalized.

A letter is a character in the set [a-zA-Z]

If there are no parameters, display \n.

Examples:

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	upper(char str)
{
	if (str >= 'a' && str <= 'z')
		ft_putchar(str - 32);
	else
		ft_putchar(str);
}

void	check(char str)
{
	if (str >= 'A' && str <= 'Z')
		ft_putchar(str + 32);
	else
		ft_putchar(str);
}

void	ft_single_letter(char str)
{
	if (str >= 'a' && str <= 'z')
		ft_putchar(str - 32);
	else
		ft_putchar(str);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (argv[i])
		{
			j = 0;
			str = argv[i];
			while (str[j])
			{
				if (str[j + 1] == ' ' || str[j + 1] == '\t')
					ft_single_letter(str[j]);
				else
				{
					if (str[j + 1] != '\0')
						check(str[j]);
					else
						upper(str[j]);
				}
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
