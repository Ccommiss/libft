
#include "libft.h"


static int	size_nbr(unsigned int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_utoa(unsigned int n)
{
	char	*nbr;
	int		size;
	unsigned		nbis;

	nbis = n;
	nbr = NULL;
	size = size_nbr(n);
	nbr = (char *)malloc(size * sizeof(char) + 1);
	if (!nbr)
		return (NULL);
	nbr[size] = '\0';
	if (n < 0)
		n = -n;
	while (size > 0)
	{
		nbr[size - 1] = (n % 10) + 48;
		n = n / 10;
		size--;
	}
	return (nbr);
}
