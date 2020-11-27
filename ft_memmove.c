#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char *dest;
	unsigned char *src;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (!s1 && !s2 && n > 0)
		return (0);
	if (s1 < s2)
		while (n-- > 0)
			*dest++ = *src++;
	else if (s1 > s2)
		while (n-- > 0)
			dest[n] = src[n];
	return (s1);
}
