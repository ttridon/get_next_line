/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttridon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 13:54:11 by ttridon           #+#    #+#             */
/*   Updated: 2016/01/14 13:20:55 by ttridon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void				ft_bzero(void *s, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *s);

#endif
