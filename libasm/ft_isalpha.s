# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:26:11 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:26:12 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isalpha(int c);

section .text
	global _ft_isalpha
	extern _ft_isrange

_ft_isalpha:
	mov		esi, 'a'
	mov		edx, 'z'
	call	_ft_isrange		; ft_isrange(c, 'a', 'z')
	cmp		rax, 1
	je		.ret			; if is range
	mov		esi, 'A'
	mov		edx, 'Z'
	call	_ft_isrange		; ft_isrange(c, 'A', 'Z')
.ret:
	ret
