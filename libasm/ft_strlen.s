# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:33:56 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:33:58 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; size_t		ft_strlen(const char *str);
global	_ft_strlen

_ft_strlen:
	mov		rax, rdi
	cmp		rax, 0
	je		.exit
	mov		cl, [rax]	; get char
	cmp		cl, 0
	jz		.ret		; len = 0
.loop:
	inc		rax			; ++
	mov		cl, [rax]	; get char
	cmp		cl, 0
	jnz		.loop		; continue
.ret:
	sub		rax, rdi	; sub pointers
	ret
.exit:
	ret
