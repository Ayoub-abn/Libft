/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:59:54 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/03 18:42:00 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	if ((char)c == 0)
	{
		return (str + (ft_strlen(s)));
	}
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	return (NULL);
}
