# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:26:45 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:26:46 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isdigit(int c);
global	_ft_isdigit
extern	_ft_isrange

_ft_isdigit:
	mov		esi, '0'
	mov		edx, '9'
	jmp		_ft_isrange
