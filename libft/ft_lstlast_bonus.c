/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bounus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdenou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:14:28 by aabdenou          #+#    #+#             */
/*   Updated: 2023/11/20 10:14:31 by aabdenou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (lst == NULL)
		return (NULL);
	p = lst;
	while (p->next != NULL)
		p = p->next;
	return (p);
}
