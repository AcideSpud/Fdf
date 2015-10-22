# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:30:08 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:30:11 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_tolower(int c);
global	_ft_tolower

_ft_tolower:
	mov		rax, rdi
	cmp		rax, 'A'
	jl		.ret
	cmp		rax, 'Z'
	jg		.ret
	add		rax, 32
.ret:
	ret
