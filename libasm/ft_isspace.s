# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isspace.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:27:23 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:27:27 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isspace(int c);
section .text
	global	_ft_isspace
	extern	_ft_isrange

_ft_isspace:
	cmp		rdi, ' '		; check space
	jz		.true
	mov		rsi, 9			; check \t, \n, \v, \f, \r
	mov		rdx, 13
	jmp		_ft_isrange
.true:
	mov		rax, 1
	ret
