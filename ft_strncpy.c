/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:21:30 by agottlie          #+#    #+#             */
/*   Updated: 2018/12/03 11:04:25 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((src[i] || dst[i]) && i < len)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		++i;
	}
	if (i < len - 1)
		while (dst[i] != '\0' && i < len)
		{
			dst[i] = '\0';
			++i;
		}
	return (dst);
}
