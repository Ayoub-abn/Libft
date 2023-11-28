/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:58:19 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/01 15:47:41 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sin;
	unsigned long long	rus;

	i = 0;
	sin = 1;
	rus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sin = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		rus = rus * 10 + (str[i] - '0');
		i++;
	}
	if (rus > 9223372036854775807 && sin == 1)
		return (-1);
	if (rus > 9223372036854775807 && sin == -1)
		return (0);
	return (rus * sin);
}
