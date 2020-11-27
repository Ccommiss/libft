#include "libft.h"

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	unsigned char	*ptr;

	if (!(ptr = malloc(elementcount * elementsize)))
		return (NULL);
	ft_bzero(ptr, elementsize * elementcount);
	return (ptr);
}
