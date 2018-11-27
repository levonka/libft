#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *narr;

	i = -1;
	narr = (char *)s;
	while (++i < n)
		narr[i] = 0;
}