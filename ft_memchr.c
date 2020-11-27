#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tofind;
	unsigned char	*ptr;

	tofind = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n && ptr[i] != tofind)
		i++;
	if (i < n && ptr[i] == tofind)
		return ((unsigned char *)&s[i]);
	return (NULL);
}
