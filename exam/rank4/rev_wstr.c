/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
You hate people! But I love gatherings. Isn't it ironic?
*/

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	char	*word_rev;
	int		len;
	char	*str;
	int		index;
	int		i;
	int		stop;

	index = 0;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		str = argv[1];
		len = ft_strlen(str);
		word_rev = malloc(len + 1 * sizeof(char));
		word_rev[len + 1] = '\0';
		len--;
		while (len >= 0)
		{
			i = 0;
			stop = 0;
			while (str[len] != ' ' && str[len] != '\t' && str[len])
			{
				len--;
				i++;
			}
			stop = len;
			len++;
			i--;
			while (i >= 0)
			{
				word_rev[index] = str[len];
				len++;
				i--;
				index++;
			}
			len = stop; // ' '
			if (str[len] == ' ')
			{
				word_rev[index] = str[len];
				index++;
			}
			len--;
		}
	}
	i = 0;
	while (word_rev[i])
	{
		ft_putchar(word_rev[i]);
		i++;
	}
	free(word_rev);
	ft_putchar('\n');
}

