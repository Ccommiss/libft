#include "libft.h"

char	*exception(char *trimmed)
{
	if (!(trimmed = (char *)malloc(1)))
		return (NULL);
	trimmed[0] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		s;
	int		e;
	int		i;

	if (!s1 || !set)
		return (NULL);
	e = ft_strlen(s1);
	s = 0;
	i = 0;
	trimmed = NULL;
	while (ft_strrchr(set, s1[s]) != NULL)
		s++;
	while (ft_strrchr(set, s1[e]) != NULL)
		e--;
	if (s1[0] == '\0' || (s > e))
		return (exception(trimmed));
	if (!(trimmed = (char *)malloc((e - s) * sizeof(char) + 2)))
		return (NULL);
	while (s <= e)
		trimmed[i++] = s1[s++];
	trimmed[i] = '\0';
	return (trimmed);
}
