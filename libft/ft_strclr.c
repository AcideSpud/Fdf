/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:10:08 by jrosamon          #+#    #+#             */
/*   Updated: 2014/11/07 16:44:53 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	char *tmp;

	tmp = s;
	if (s)
	{
		while (*s++)
			*tmp++ = '\0';
	}
}
