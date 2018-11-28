/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:48:41 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/28 11:23:44 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	g;

	i = ft_strlen(s1);
	g = -1;
	if (n == 0)
		return (s1);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (++g < n)
	{
		s1[i] = s2[g];
		++i;
	}
	s1[i] = '\0';
	return (s1);
}
