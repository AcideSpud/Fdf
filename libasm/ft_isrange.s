# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isrange.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:27:12 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:27:14 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int			ft_isrange(int c, int from, int to);
global	_ft_isrange

_ft_isrange:
	cmp		esi, edx
	jg		.to_from		; if from > to
.from_to:				; check from <= c <= to
	cmp		edi, esi
	jl		.false			; if c < from
	cmp		edi, edx
	jg		.false			; if c > to
	jmp		.true
.to_from:				; check to <= c <= from
	cmp		edi, esi
	jg		.false			; if c < from
	cmp		edi, edx
	jl		.false			; if c > to
.true:					; return true
	mov		rax, 1
	ret
.false:					; return false
	mov		rax, 0
	ret
