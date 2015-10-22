# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putlstr.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tapostin <tapostin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/12 14:28:44 by tapostin          #+#    #+#              #
#    Updated: 2015/06/12 14:28:46 by tapostin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


; int			ft_putlstr(const char *str, size_t len);
global	_ft_putlstr

_ft_putlstr:
	mov		rdx, rsi	; len
	mov		rsi, rdi	; str
	mov		rdi, 1		; fd
	mov		rax, 0x2000004	; write syscall
	syscall
	mov		rax, 0		; return 0
	ret
