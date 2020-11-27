#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && big[i])
	{
		while (big[i] != little[0] && i < len)
			i++;
		if (ft_mystrncmp((big + i), little, ft_strlen(little)) == 0
		&& i + ft_strlen(little) <= len)
			return ((char *)big + i);
		else
			return (NULL);
	}
	return (0);
}
