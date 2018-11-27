#include "includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = -1;
	if (src == NULL)
		return (NULL);
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}