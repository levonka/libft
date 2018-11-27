#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *new_arr;
	unsigned char ch;

	i = -1;
	ch = (unsigned char)c;
	new_arr = (unsigned char *)b;
	while (++i < len)
		new_arr[i] = ch;
	return (b);
}