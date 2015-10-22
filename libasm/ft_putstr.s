# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putstr.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:29:07 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:29:08 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_putstr(const char *str);
global	_ft_putstr
extern	_ft_strlen
extern	_ft_putlstr

ft_putstr:
	call	_ft_strlen
	mov		rsi, rax
	call	_ft_putlstr
	ret
