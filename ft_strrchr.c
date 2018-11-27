#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*new_arr;
	int		len;

	new_arr = (char*)s;
	len = ft_strlen(s);
	if (new_arr == NULL)
		return (NULL);
	while (*new_arr != '\0')
		++new_arr;
	while (len != 0)
	{
		if (*new_arr == c)
			return (new_arr);
		--new_arr;
		--len;
	}
	return (NULL);
}