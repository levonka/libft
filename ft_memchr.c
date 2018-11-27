#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *new_arr;

	i = -1;
	new_arr = (unsigned char *)s;
	while (++i < n)
	{
		if (*new_arr == c)
			return (new_arr);
		++new_arr;
	}
	return (NULL);
}