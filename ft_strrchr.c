/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:19:02 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/28 11:24:47 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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