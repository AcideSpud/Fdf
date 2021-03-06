/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosamon <jrosamon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:17:37 by jrosamon          #+#    #+#             */
/*   Updated: 2014/11/10 20:29:24 by jrosamon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int len;
	int i;

	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		while (i++ < len)
			(*f)(s++);
	}
}
