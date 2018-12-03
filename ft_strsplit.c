/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:18:59 by agottlie          #+#    #+#             */
/*   Updated: 2018/12/03 16:37:42 by agottlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*ft_strtrim_ch(char const *s, char c)
{
	int		begin;
	int		end;
	char	*new_arr;

	begin = 0;
	end = ft_strlen(s) - 1;
	if (s)
	{
		while (s[begin] == c)
			++begin;
		while (s[end] == c && end >= 0)
			--end;
		new_arr = ft_strsubi(s, begin, end);
		if (new_arr == NULL)
			return (NULL);
		return (new_arr);
	}
	return (NULL);
}

static void	ft_distributor(char *t_arr, char **n_arr, char c)
{
	int		i;
	int		j;
	int		g;
	int		len;

	i = -1;
	j = 0;
	g = 0;
	len = 0;
	while (t_arr[++i] != '\0')
	{
		j = i;
		len = 0;
		while (t_arr[i] != c && t_arr[i] != '\0')
		{
			++i;
			len++;
		}
		if (len > 0)
		{
			if ((n_arr[g] = ft_strnew(len)) == NULL)
				return ;
			ft_strncpy(n_arr[g++], t_arr + j, len);
		}
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new_arr;
	char	*trim_arr;
	int		w_amount;

	if (s == NULL)
		return (NULL);
	if ((trim_arr = ft_strtrim_ch(s, c)) == NULL)
		return (NULL);
	w_amount = ft_word_count_c(trim_arr, c);
	new_arr = (char **)malloc(sizeof(char *) * (w_amount + 1));
	if (new_arr == NULL)
		return (NULL);
	new_arr[w_amount] = 0;
	ft_distributor(trim_arr, new_arr, c);
	return (new_arr);
}
