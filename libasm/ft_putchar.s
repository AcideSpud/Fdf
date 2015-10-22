# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putchar.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:28:23 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:28:24 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;int		putchar(int c);

global  _ft_putchar
section .text

_ft_putchar:
	push	rdi
	mov		rsi, rsp	;move stack ptr on rsi
	mov		rdx, 1		;len is 1
	mov		rdi, 1		;fd
	mov		rax, 0x20000004 ;syscall write
	syscall
	jc		.error		;if syscall fail

.exit:
	pop rdi
	ret
.error:
	mov rax, -1
	jmp .exit
