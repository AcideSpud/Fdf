# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:26:56 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:26:58 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isprint(int c);
global	_ft_isprint
extern	_ft_isrange

_ft_isprint:
	mov		esi, ' '
	mov		edx, '~'
	jmp		_ft_isrange
