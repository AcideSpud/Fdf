# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:29:24 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:29:25 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; char			*ft_strdup(const char *str);
global	_ft_strdup
extern	_ft_strlen
extern	_ft_memcpy
extern	_malloc

_ft_strdup:
	call	_ft_strlen	; get len
	push	rdi			; save rdi
	push	rax			; save len
	mov		rdi, rax
	call	_malloc		; malloc
	cmp		rax, 0
	je		.error		; malloc fail
	mov		rdi, rax
	pop		rdx
	pop		rsi			; rdi
	call	_ft_memcpy
	ret
.error:
	mov		rax, 0
	ret
