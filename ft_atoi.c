#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int nbr;
	int neg;

	nbr = 0;
	neg = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\r' || *nptr == '\v'
	|| *nptr == '\f' || *nptr == '\n')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = 1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		nbr = nbr * 10;
		nbr = nbr + (*nptr - 48);
		nptr++;
	}
	if (neg == 1)
		nbr = nbr * -1;
	return (nbr);
}
