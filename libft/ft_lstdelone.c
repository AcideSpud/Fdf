/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 19:48:32 by jrosamon          #+#    #+#             */
/*   Updated: 2014/12/03 15:18:21 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst && *alst && del)
	{
		tmp = *alst;
		(*del)(tmp->content, tmp->content_size);
	}
	ft_memdel((void**)alst);
}
