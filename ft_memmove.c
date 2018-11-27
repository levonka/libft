/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:50:37 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/23 14:13:52 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char buff[len];
	unsigned char *new_arr;
	unsigned char *old_arr;

	i = -1;
	new_arr = (unsigned char *)dst;
	old_arr = (unsigned char *)src;
	while (++i < len)
		buff[i] = old_arr[i];
	i = -1;
	while (++i < len)
	 	new_arr[i] = buff[i];
	return (new_arr);
}