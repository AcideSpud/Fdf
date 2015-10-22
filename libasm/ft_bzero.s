# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:25:05 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:25:08 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;void			*ft_bzero(void *mem, size_t len);
global	_ft_bzero

_ft_bzero:
	dec		rsi
	cmp		rsi, 0
	jl		.exit
	mov		byte[rdi+rsi], 0
	jmp		_ft_bzero

.exit:
	ret
