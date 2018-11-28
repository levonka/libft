/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:21:30 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/28 11:15:11 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	if (src == NULL || dst == NULL)
		return (NULL);
	while ((src[++i] || dst[i]) && i < len)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
	}
	if (i-- < len)
		while (dst[++i])
			dst[i] = '\0';
	return (dst);
}
