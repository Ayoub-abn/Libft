/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:25:49 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/15 10:22:46 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	unsigned int	l;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (start >= l || len == 0)
		return (ft_strdup(""));
	if (len > l - start)
		len = l - start;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
