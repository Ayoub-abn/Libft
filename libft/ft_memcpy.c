/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:06:31 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/18 15:54:11 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*serc;
	unsigned char		*dest;

	dest = (unsigned char *)dst;
	serc = (const unsigned char *)src;
	i = 0;
	if (dest == serc || n == 0)
		return (dest);
	while (i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dst);
}
