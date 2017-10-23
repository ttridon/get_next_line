/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttridon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:14:18 by ttridon           #+#    #+#             */
/*   Updated: 2016/01/14 13:16:17 by ttridon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s_cpy;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	s_cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s_cpy)
		return (NULL);
	while (s1[i])
	{
		s_cpy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s_cpy[i] = s2[j];
		i++;
		j++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
