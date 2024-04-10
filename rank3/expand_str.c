/*
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/

#include <unistd.h>

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
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t' && argv[1][i])
			i++;
		len = ft_strlen(argv[1]);
		len--;
		while (argv[1][len] == ' ' || argv[1][len] == '\t' && len >= 0)
			len--;
		if (len >= 0)
		{
			while (i <= len)
			{
				if (argv[1][i] == ' ' || argv[1][i] == '\t')
				{
					while (argv[1][i] == ' ' || argv[1][i] == '\t' && i <= len)
						i++;
					write(1, "   ", 3);
					continue ;
				}
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
