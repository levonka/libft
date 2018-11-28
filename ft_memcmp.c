/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:22:12 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/28 11:21:17 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*arr1;
	unsigned char	*arr2;

	i = -1;
	arr1 = (unsigned char *)s1;
	arr2 = (unsigned char *)s2;
	while (++i < n || arr1[i] != '\0')
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
	return (0);
}
