#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*new_arr;

	new_arr = (char*)s;
	if (new_arr == NULL)
		return (NULL);
	while (*new_arr != '\0')
	{
		if (*new_arr == c)
			return (new_arr);
		++new_arr;
	}
	return (NULL);
}