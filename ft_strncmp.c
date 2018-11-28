/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:24:03 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/28 11:15:07 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	w;

	w = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && w < n - 1)
	{
		++s1;
		++s2;
		++w;
	}
	return (*s1 - *s2);
}
