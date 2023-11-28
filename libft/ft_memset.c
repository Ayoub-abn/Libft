/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:35:17 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/02 16:13:42 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	v;

	i = 0;
	str = (unsigned char *)b;
	v = (unsigned char)c;
	while (i < len)
	{
		str[i] = v;
		i++;
	}
	return (b);
}
