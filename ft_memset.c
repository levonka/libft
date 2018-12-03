/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:39:38 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/28 13:57:44 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*new_arr;
	unsigned char	ch;

	i = -1;
	ch = (unsigned char)c;
	new_arr = (unsigned char *)b;
	while (++i < len)
		new_arr[i] = ch;
	return (b);
}
