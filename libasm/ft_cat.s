# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_cat.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:25:37 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:25:38 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; void			ft_cat(int fd);
global	_ft_cat
extern	_ft_putlstr

_ft_cat:
	push	rbx			; save rbx
	mov		rbx, rdi	; save rdi
.read:
	mov		rdx, buff_size
	lea		rsi, [rel buff]
	mov		rdi, rbx
	mov		rax, 0x2000003	; read syscall
	syscall
	jc		.ret		; error break loop
	cmp		rax, 0
	jle		.ret		; eof break loop
.write:
	mov		rsi, rax
	lea		rdi, [rel buff]
	call	_ft_putlstr
	jmp		.read
.ret:
	pop		rbx			; restore rbx
	ret

section .bss
	buff		resb 192
	buff_size	equ $ - buff
