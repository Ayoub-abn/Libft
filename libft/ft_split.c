/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:11:12 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/21 17:18:52 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**free_list(char **str, int n)
{
	while (n > 0)
		free(str[--n]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		n;

	ptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	n = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i] != '\0' && s[i] != c && j++ >= 0)
			i++;
		ptr[n++] = ft_substr(s, i - j, j);
		if (ptr[n - 1] == NULL)
			return (free_list(ptr, n));
	}
	ptr[n] = NULL;
	return (ptr);
}
