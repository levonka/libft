#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		g;
	size_t	orig_buf_size;

	g = -1;
	i = ft_strlen(dst) - 1;
	orig_buf_size = ft_strlen(dst);
	if (dst == NULL || src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	if (size > ft_strlen(dst))
	{
		while (++i < (size - 1))
			dst[i] = src[++g];
		dst[i] = '\0';
		return (orig_buf_size + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
