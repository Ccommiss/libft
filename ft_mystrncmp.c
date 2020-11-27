#include "libft.h"

int	ft_mystrncmp(const char *first, const char *second, size_t length)
{
	size_t i;

	i = 0;
	if ((first[0] == '\0' && second[0] == '\0') || length == 0)
		return (0);
	while (first[i] && second[i] && i < length - 1)
		i++;

	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
