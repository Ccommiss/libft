#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	unsigned char *dst2;
	unsigned char *src2;

	if (!dst && !src)
		return (0);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (size-- > 0)
		*dst2++ = *src2++;
	return (dst);
}
