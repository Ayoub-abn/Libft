/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:22:31 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/05 17:09:00 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	s = ft_strlen(src);
	i = 0;
	if (dstsize == 0 || ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	d = ft_strlen(dst);
	while (i < dstsize - d - 1 && src[i] != '\0')
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (d + s);
}
