#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	if (src == NULL)
		return (NULL);
	if (ft_strlen(src) < len)
	{
		while (dst[++i])
			dst[i] = '\0';
		return (dst);
	}
	while (src[++i] && i < len)
		dst[i] = src[i];
	return (dst);
}