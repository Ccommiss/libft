#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	n;

	n = ft_strlen(s);
	if (!(new = (char *)malloc(n * sizeof(char) + 1)))
		return (NULL);
	new = ft_memcpy(new, s, n);
	new[n] = '\0';
	return (new);
}
