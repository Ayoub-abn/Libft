/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:27:36 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/03 17:03:45 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if ((char )c == 0)
	{
		return (str + i);
	}
	return (0);
}
