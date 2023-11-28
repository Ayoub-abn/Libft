/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:33:23 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/06 18:42:24 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lin;
	char	*p;
	int		i;
	int		j;

	lin = my_strlen(s1) + my_strlen(s2);
	i = 0;
	j = 0;
	p = malloc((lin + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2 != NULL && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
