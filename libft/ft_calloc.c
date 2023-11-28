/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:14:17 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/05 17:09:39 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			c;

	c = count * size;
	if (count != 0 && c / count != size)
		return (NULL);
	p = malloc(count * size);
	if (p != NULL)
		ft_bzero(p, count * size);
	return (p);
}
