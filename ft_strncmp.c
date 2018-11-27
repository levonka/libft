#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	w;

	w = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && w < n - 1)
	{
		++s1;
		++s2;
		++w;
	}
	return (*s1 - *s2);
}
