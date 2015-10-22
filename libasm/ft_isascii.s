# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:26:27 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:26:30 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isascii(int c);
global	_ft_isascii
extern	_ft_isrange

_ft_isascii:
	mov		esi, 0
	mov		edx, 127
	jmp		_ft_isrange
