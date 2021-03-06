#include "libft.h"

int	ft_isempty(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 9 && str[i] != 11 && str[i] != 0)
			return (0);
		i++;
	}
	return (1);
}