#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	len = abs(end - start + 1);
	int	*array = (int *) malloc((len) * sizeof(int));

	while (i < len)
	{
		if (start > end)
		{
			array[i] = start;
			start--;
			i++;
		}
		else
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	return (array);
}
